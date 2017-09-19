#include <iostream>
#include <cstdlib>
using namespace std;

struct wezel
{
float wartosc;           //wartosc przechowywana w wezle
struct wezel *rodzic;  //wskaznik na rodzica
struct wezel *l_syn;   //wskaznik na lewe dziecko
struct wezel *p_syn;   //wskaznik na prawe dziecko
};
struct wezel *root;  //wskaźnik na root'a

//dodaje wezel o podanej wartosci n, do drzewa o korzeniu start
float dodawanie(float n, struct wezel *start)
{
//jezeli drzewo jest puste to dodaj korzen
    if (root == NULL)
    {
        root = (wezel*)malloc(sizeof *root);
        root->wartosc = n;
        root->l_syn = NULL;
        root->p_syn = NULL;
        root->rodzic = NULL;
    }
    //jezeli zadana wartosc jest mniejsza od korzenia idz do lewego poddrzewa
    else if(n < start->wartosc)
    {
    //jezeli lewe poddrzewo istnieje wywolaj dla niego ta funkcje rekurencyjnie
        if(start->l_syn != NULL)
        {
            dodawanie(n,start->l_syn);
        }
    //jezeli lewe poddrzewo nie istnieje dodaj nowy wezel o zadanej wartosci
        else
        {
            wezel *nowy = (wezel*)malloc(sizeof *root);
            nowy->wartosc = n;
            nowy->l_syn = NULL;
            nowy->p_syn = NULL;
            nowy->rodzic = start;
            start->l_syn=nowy;
        }
    }
    //jezeli zadana wartosc jest wieksza lub rowna korzeniowi idz do prawego poddrzewa
    else
    {
    //jezeli prawe poddrzewo istnieje wywolaj dla niego ta funkcje rekurencyjnie
        if(start->p_syn!=NULL)
        {
            dodawanie(n,start->p_syn);
        }
    //jezeli prawe poddrzewo nie istnieje dodaj nowy wezel o zadanej wartosci
        else
        {
            wezel *nowy = (wezel*)malloc(sizeof *root);
            nowy->wartosc = n;
            nowy->l_syn = NULL;
            nowy->p_syn = NULL;
            nowy->rodzic = start;
            start->p_syn=nowy;
        }
    }
    return 0;
}

//przejdz drzewo w kolejnosci zaczynajac od wezla start
void in_order_tree_walk(struct wezel *start)
{
if(start->l_syn != NULL) //jezeli ma dzieci po lewej stronie wywolaj funkcje rekurencyjnie
in_order_tree_walk(start->l_syn);
cout<<start->wartosc<<endl; //wypisz wartosc
if(start->p_syn != NULL) //jezeli ma dzieci po prawej stronie wywolaj rekurencyjnie
in_order_tree_walk(start->p_syn);
}

int main()
{
    //ZADANIE 2.2.39
    //Napisz rodzinê funkcji maksimum zwracaj¹cych maksimum
    //od dwóch do piêciu wartoœci otrzymanych w argumentach. Argumenty
    //funkcji oraz wartoœæ zwracana przez funkcjê powinny byæ typu int.
    //OPIS: Program bêdzie pobiera³ linie znaków, sam sprawdza³ ile ichjest, porównywa³ ich wartoœci i liczy³ œredni¹.

    string napis;
    cout << "Wypisz zestaw liczb do porównania oddzielaj¹c je spacjami.\nLiczby zmiennoprzecinkowe zapisz z wykorzystaniem kropki.\nZaakceptuj enterem."<<endl;
    getline(cin,napis);

    int i=0;
    float suma=0;
    root = NULL;
    for (;;)
    {
        i++;
        int dlugosc=napis.length();
        string szukaj=" ";
        int pozycja = napis.find(szukaj);
        if ((pozycja!=string::npos) && (dlugosc>2))
            {
            string liczba1str = napis.substr (0,pozycja);
            float liczba1=atof(liczba1str.c_str());
            dodawanie(liczba1, root);
            suma=suma+liczba1;
            string nowynapis=napis.substr(pozycja+1,dlugosc-pozycja);
            napis=nowynapis;
            }
        else
            {
                string liczba1str = napis.substr (0,dlugosc);
                float liczba1=atof(liczba1str.c_str());
                dodawanie(liczba1, root);
                suma=suma+liczba1;
                break ;
            }
    }

    cout <<"Ilość odczytanych elementów:  "<<i<<endl;
    cout <<"Odczytane wartośći: "<<endl;
    //przejdz drzewo w kolejnosci
    in_order_tree_walk(root);
    cout <<"Średnia wartość: " <<suma/i<<endl;


    return 0;
}
