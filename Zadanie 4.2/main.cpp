#include <iostream>
#include <time.h>
#include <cstdlib>
#include <math.h>

using namespace std;

void tablica1(int *wsk,int n)
{ //funkcja do zadania 4.2.2

    //a srednia
    int suma=0;
    int suma_kw=0;
    for (int j=0;j<n;j++)
    {
        suma=suma+wsk[j];
        suma_kw=suma_kw+wsk[j]*wsk[j];
    }
    cout<<"Wartosc srednia wynosi:  "<< suma/n<<endl;
    //b
    cout<<"Suma elementow tablicy wynosi:  "<< suma<<endl;
    //c
    cout<<"Suma elementow tablicy wynosi:  "<< suma_kw<<endl;

}


struct wezel
{//funkcja do zadania 4.2.5
int wartosc;           //wartosc przechowywana w wezle
struct wezel *nastepny;  //wskaznik na nastepny element
};
struct wezel *info; //wskaŸnik na info

int dodawanie(int n, struct wezel *start)
{//funkcja do zadania 4.2.5
    if (info == NULL)
    {
        //inicjalizacja g³owy
        info = (wezel*)malloc(sizeof *info);
        info->wartosc = NULL;
        info->nastepny = NULL;
        wezel *nowy = (wezel*)malloc(sizeof *info);
        nowy->wartosc = n;
        nowy->nastepny = NULL;
        info->nastepny=nowy;
    }
    else
    {
        if(start->nastepny == NULL)
        {
            wezel *nowy = (wezel*)malloc(sizeof *info);
            nowy->wartosc = n;
            nowy->nastepny = NULL;
            start->nastepny=nowy;

        }
        else
        {
           dodawanie(n,start->nastepny);
        }
    }
    return 0;
}

void wyswietl_liste(struct wezel *start)
{//funkcja do zadania 4.2.5
    cout<<start->wartosc<<"    ";
    if(start->nastepny != NULL) wyswietl_liste(start->nastepny);
}

struct wezel* wskaznik(struct wezel *start)
{//funkcja do zadania 4.2.5
    return start->nastepny;
}

int wartosc(struct wezel *start)
{//funkcja do zadania 4.2.5
    return start->wartosc;
}

void zeruj(struct wezel *start)
{//funkcja do zadania 4.2.5
    start->wartosc=NULL;
    start->nastepny=NULL;
}

int odejmowanie(int n,struct wezel *start)
{//funkcja do zadania 4.2.5
    wezel* a;
    if(start->nastepny!=NULL)
    {
        if (n==wartosc(start->nastepny))
        {
            a=start->nastepny;
            start->nastepny=wskaznik(start->nastepny);
            zeruj(a);
        }
        if(start->nastepny!=NULL)
        odejmowanie(n,start->nastepny);
    }
    else  return 0;
}

double* przepisywanie1(int n,int a[],int b[],double c[])
{

    int j;
    for (j=0;j<n;j++)
    {
        c[j]= a[j];
    }
    for (j=0;j<n;j++)
    {
        c[j+n]= a[n];
    }
    double *wsk1;
    wsk1=&c[0];
    return wsk1;
}
int main()
{

    //ZADANIE 4.2.2
    /*
    //Napisz funkcjê, która otrzymuje dwa argumenty: dodatni¹ liczbê ca³kowit¹
    //n oraz n-elementow¹ tablicê tab o elementach typu int i zwraca
    //jako wartoœæ:
    //a) (r) œredni¹ arytmetyczn¹ elementów tablicy tab.
    //b) sumê elementów tablicy tab,
    //c) sumê kwadratów elementów tablicy tab.
    int n;
    cout<<"Podaj wielkosc tablicy"<<endl;
    cin >> n;
    int tablica[n];
    srand(time(NULL));
    for (int i=0;i<n;i++)
    {
        tablica[i]=rand()%100+1;
        cout <<tablica[i]<<"   ";
    }
    cout <<endl;

    int *wsk_tablica;
    wsk_tablica=&tablica[0];

    tablica1(wsk_tablica,n);
    */

    //ZADANIE 4.2.5
    /*
    //Napisz funkcjê, która otrzymuje jako argument liczbê ca³kowit¹
    //n (n > 3) i zwraca jako wartoœæ najwiêksz¹ liczbê pierwsz¹
    //mniejsz¹ od n (do wyznaczenia wyniku u¿yj algorytmu sita Eratostenesa).
    int n;
    cout<<"Wprowadz liczbe naturalna wiekza od 3"<<endl;
    cin >>n;
    int i,j;
    for (i=2;i<=n;i++)
    {
        dodawanie(i,info);
    }

    cout<<"Wszystkie liczby z tego przedzia³u: "<<endl;

    //usuwanie liczb, które nie sa pierwsze
     wyswietl_liste(info->nastepny);

    struct wezel* a;
    a=info;
    i=wartosc(a);
    cout<<endl <<i<<endl;
    for (i=2;i<=sqrt(n);)
    {
        for(j=2;j<=floor(n/2);j++)
        {
        odejmowanie(i*j,info);
        }
        a=wskaznik(a);
        i=wartosc(a);
    }
    cout<<"\n Liczby pierwsze z tego przedzia³u: "<<endl;
    wyswietl_liste(info->nastepny);
    free (info);
    */

    //ZADANIE 4.2.8
    //Napisz funkcjê, która otrzymuje cztery argumenty: dodatni¹ liczbê
    //ca³kowit¹ n, n-elementowe tablice tab1 i tab2 oraz 2 · n-elementow¹
    //tablicê tab3 o elementach typu double.
    //a) Funkcja powinna przepisywaæ zawartoœæ tablic tab1 i tab2 do tablicy
    //tab3 w taki sposób, ¿e na pocz¹tku tablicy tab3 powinny siê
    //znaleŸæ elementy tablicy tab1, a po nich elementy tablicy tab2.
    //b) Funkcja powinna przepisywaæ zawartoœæ tablic tab1 i tab2 do tablicy
    //tab3 w taki sposób, ¿e w komórkach tablicy tab3 o nieparzystych
    //indeksach powinny siê znaleŸæ elementy tablicy tab1,
    // a w komórkach tablicy tab3 o parzystych indeksach elementy tablicy tab2.

    int n,i;
    cout<<"Podaj wartosc parametru n"<<endl;
    cin >>n;
    int a[n],b[n];
    double c[2*n];
    for (i=0;i<n;i++)
    {
        a[i]=i+1;
        b[i]=n-i;
    }
    cout<<"wyglad tablic a i b: "<<endl;
     for (i=0;i<n;i++)
    {
        cout <<a[i]<<"   ";
    }
    cout <<endl<<"Tablica C: "<<endl;

    //a
    double* wsk;
    wsk=&c[0];
    przepisywanie1(n,a[n],b[n],c[n]);
    for (i=0;i<n;i++)
    {
        cout <<*wsk<<"   ";
        wsk++;
    }
    //b
    //przepisywanie2(n,a[n],b[n],c[n]);

    return 0;

}
