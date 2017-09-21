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

int pierwsza(int n)
{//funkcja do zadania 4.2.5-rozwiazanie z kiazki
    int pom;
    bool * sito=new bool[n];
    for (int i=0;i<n;i++)
        sito[i]=true;
    for (int i=2;i<n;i++)
    if (sito[i]){
        pom=i;
        for(j=2*i;j<n;j+=i)
            sito[j]=false;
    }
    delete []sito;
    return pom;
}

void przepisywanie1(int n,int* wska,int* wskb,double* wskc)
{

    int j;
    for (j=0;j<n;j++)
    {
        wskc[j]= wska[j];
    }
    for (j=0;j<n;j++)
    {
        wskc[j+n]= wskb[j];
    }
}

void przepisywanie2(int n,int* wska,int* wskb,double* wskc)
{

    int j;
    for (j=0;j<n*2;j++)
    {
        if (j%2==0) wskc[j]= wska[j/2];
        else  wskc[j]= wskb[j/2];
    }

}

void funkcja(int n,int* w_tab)
{
    int maks,mini,indeks_maks=0,indeks_min=0,maks_m,indeks_maks_m=0;
    maks=w_tab[0];
    mini=w_tab[0];
    maks_m=w_tab[0];
    for (int i=1;i<n;i++)
    {
        if (w_tab[i]>maks)
        {maks=w_tab[i];
        indeks_maks=i;}
        if (w_tab[i]<mini)
        {mini=w_tab[i];
        indeks_min=i;}
        if (abs(w_tab[i])>abs(maks_m))
        {maks_m=w_tab[i];
        indeks_maks_m=i;}
    }

    cout<<"a) Największą wartość przechowywaną w tablicy tab:  "<<maks<<endl;
    cout<<"b) Najmniejsza wartość przechowywaną w tablicy tab:  "<<mini<<endl;
    cout<<"c) Indeks elementu o największej wartości:  "<<indeks_maks+1<<endl;
    cout<<"d) Indeks elementu o najmniejszej wartości:  "<<indeks_min+1<<endl;
    cout<<"e) Największą wartość bezwzględna w tablicy tab:  "<<maks_m<<endl;
    cout<<"d) Indeks największej wartości bezwzględnej:  "<<indeks_maks_m+1<<endl;

}

int* tworz_tablice(int n)
{
     int * liczba;
     liczba = new int[n];
     return liczba;
}

int* usun_zera(int n,int *wsk3)
{ //funkcja do zadania 4.2.19
    int suma=0,j=0,i=0;
    cout <<endl<<wsk3[2]<<endl;
    for (j=0;j<n;j++)
    {
        if (wsk3[j]==0) suma++;
    }
    int* wsk4;
    wsk4= new int[n-suma];
    for (j=0;j<n;j++)
    {
    if (wsk3[j]!=0)
    {wsk4[i]=wsk3[j];
    i++;
    }
    }

    return wsk4;
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
    /*
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
    for (i=0;i<n;i++)
    {
        cout <<b[i]<<"   ";
    }
    cout <<endl<<"Tablica C: "<<endl;
    //a
    double* wsk1;
    wsk1=&c[0];
    int *wska; int* wskb;
    wska=&a[0];
    wskb=&b[0];
    przepisywanie1(n,wska,wskb,wsk1);
    for (i=0;i<2*n;i++)
    {
        cout <<*wsk1<<"   ";
        wsk1++;
    }
    //b
    cout<<endl;
    double* wsk2;
    wsk2=&c[0];
    przepisywanie2(n,wska,wskb,wsk2);
    for (i=0;i<2*n;i++)
    {
        cout <<*wsk2<<"   ";
        wsk2++;
    }
    */

    //ZADANIE 4.2.10
    /*
    //Napisz funkcję, która otrzymuje dwa argumenty: dodatnią liczbę całkowitą
    //n oraz n-elementową tablicę tab o elementach typu int i:
    //a) (r,!) zwraca największą wartość przechowywaną w tablicy tab,
    //b) zwraca najmniejszą wartość przechowywaną w tablicy tab,
    //c) (r,!) zwraca indeks elementu tablicy tab o największej wartości,
    //d) zwraca indeks elementu tablicy tab o najmniejszej wartości,
    //e) zwraca największą spośród wartości bezwzględnych elementów przechowywanych
    //w tablicy tab,
    //f) zwraca indeks elementu tablicy tab o największej wartości bezwzględnej.
    int n;
    cout <<"Podaj wartosc n"<<endl;
    cin >>n;
    int tab[n];
    srand(time(NULL));
    cout<<"Tablica:"<<endl;
    for (int i=0;i<n;i++)
    {
        tab[i]=rand()%100+1;
        cout<<tab[i]<<"   ";
    }
    cout<<endl;
    int* w_tab;
    w_tab=&tab[0];
    funkcja(n,w_tab);
    */

    //ZADANIE 4.2.13
    /*
    //Napisz funkcję, która otrzymuje jako argument dodatnią liczbę
    //całkowitą n, a następnie tworzy dynamiczną n-elementową tablicę
    //o elementach typu int i zwraca jako wartość wskaźnik do jej pierwszego
    //elementu.
    int n;
    cout <<"Podaj wartosc n"<<endl;
    cin >>n;
    int *wskaznik;
    wskaznik=tworz_tablice(n);
    delete[] wskaznik;
    */

    // ZADANIE 4.2.19
    /*
    //Napisz funkcję, która dostaje w argumentach dodatnią liczbę całkowitą
    //n oraz n-elementową tablicę liczb całkowitych tab1 o elementach
    //typu int i przepisuje do nowo utworzonej tablicy tab2 elementy
    //tablicy tab1 o wartości różnej od zera. Rozmiar tablicy tab2 powinien
    //być równy liczbie niezerowych elementów tablicy tab1. Jako wartość
    //funkcja powinna zwrócić wskaźnik na pierwszy element tablicy tab2.
    int n,i,a;
    cout <<"Podaj wartosc n, a nastepnie kolejne liczby tablicy"<<endl;
    cin>>n;
    int tab1[n];
    for (i=0;i<n;i++)
    {cin >>tab1[i];
    }
    cout <<"tablica pierwotna: "<<endl;
    for (i=0;i<n;i++)
    {cout <<tab1[i]<<"    ";
    }
    cout <<"tablica po zmianach: "<<endl;
    int* wsk3,*wsk4;
    wsk3=&tab1[0];
    wsk4=usun_zera(n,wsk3);
    for (i=0;i<n;i++)
    {cout <<wsk4[i]<<"    ";
    }
    */

    return 0;

}
