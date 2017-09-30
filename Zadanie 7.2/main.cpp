#include <iostream>
#include <time.h>
#include <cstdlib>
#include <math.h>

using namespace std;

struct trojkat{//struktura do zadania 7.2.1
int a,b,c;
};

struct punkt{//struktura do zadania 7.2.3
double x,y,z;
};

struct punkt10{//struktura do zadania 7.2.5
double p[10];
};

struct punktn{//struktura do zadania 7.2.6
int n;
double *tab;
};

struct zespolone{//struktura do zadania 7.2.7
double im,re;
};

int obwod(trojkat fig_1)
{//funkcja do zadania 7.2.1
    return fig_1.a+fig_1.b+fig_1.c;
}

void losuj(trojkat* fig)
{//funkcja do zadania 7.2.2
    srand(time(NULL));
    fig->a=rand()%10-5;
    fig->b=rand()%10-5;
    fig->c=rand()%10-5;
}

trojkat losuj(trojkat fig)
{//funkcja do zadania 7.2.2
    srand(time(NULL));
    fig.a=rand()%10-5;
    fig.b=rand()%10-5;
    fig.c=rand()%10-5;
    return fig;
}

void wyswietl(trojkat* fig)
{//funkcja do zadania 7.2.2
    cout<<fig->a<<"   "<<fig->b<<"  "<<fig->c<<endl;
}
void wyswietl(trojkat fig)
{//funkcja do zadania 7.2.2
    cout<<fig.a<<"   "<<fig.b<<"  "<<fig.c<<endl;
}

void przepisz(trojkat fig1,trojkat* fig2)
{//funkcja do zadania 7.2.2
    *fig2=fig1;
}

void losuj(int n,punkt  * tab)
{//funkcja do zadania 7.2.3
    srand(time(NULL));
    for (int i=0;i<n;i++)
    {
    tab[i].x=rand()%10-5;
    tab[i].y=rand()%10-5;
    tab[i].z=rand()%10-5;
    }
}

void wyswietl(int n,punkt tab[])
{//funkcja do zadania 7.2.3
    cout<<endl;
    for (int i=0;i<n;i++)
    {
    cout<<tab[i].x<<"   ";
    cout<<tab[i].y<<"   ";
    cout<<tab[i].z<<"   "<<endl;

    }
}



double najmniejsza_odleglosc(int n,punkt tab[])
{//funkcja do zadania 7.2.3
    double pom,odl=sqrt(pow((tab[1].x)-(tab[0].x),2)+pow((tab[1].y)-(tab[0].y),2)+pow((tab[1].z)-(tab[0].z),2));
    for (int j=0; j<n; j++)
    {
        for (int i=j+1; i<n-1; i++)
        {
            pom=sqrt(pow((tab[j].x)-(tab[i].x),2)+pow((tab[j].y)-(tab[i].y),2)+pow((tab[j].z)-(tab[i].z),2));
            if (odl>pom) odl=pom;
        }
    }
    return odl;
}

void przepisz(punkt *wsk1,punkt *wsk2,int n)
{//funkcja do zadania 7.2.4
    for (int i=0;i<n;i++)
    {
        wsk2[i]= wsk1[i];
    }
}

void losuj(int n,punkt10  *tab)
{//funkcja do zadania 7.2.5
    srand(time(NULL));
    for (int i=0;i<n;i++)
    {
    tab->p[i]=rand()%10-5;
    }
}

void wyswietl(int n,punkt10 *tab)
{//funkcja do zadania 7.2.5
    cout<<endl;
    for (int i=0;i<n;i++)
    {
    cout<<tab->p[i]<<"   ";
    }
    cout<<endl;
}

void przepisz(punkt10 *wsk1,punkt10 *wsk2,int n)
{//funkcja do zadania 7.2.5
    for (int i=0;i<n;i++)
    {
        wsk2[i]= wsk1[i];
    }
}
void losuj(int m,punktn  *tab)
{//funkcja do zadania 7.2.6
    srand(time(NULL));
    for (int j=0;j<m;j++)
    {
        for (int i=0;i<tab[j].n;i++)
        tab[j].tab[i]=rand()%10-5;
    }
}

void wyswietl(int m,punktn *tab)
{//funkcja do zadania 7.2.6
    cout<<endl;
    cout<<endl;
    for (int j=0;j<m;j++)
    {
        for (int i=0;i<tab[j].n;i++)
        {
          cout <<tab[j].tab[i]<<"  ";
        }
    cout<<endl;
    }
}

void przepisz(punktn *tab1,punktn *tab2,int m)
{//funkcja do zadania 7.2.6
    for (int j=0;j<m;j++)
    {
        for (int i=0;i<tab1[j].n;i++)
        {
          tab2[j].tab[i]= tab1[j].tab[i];
        }

    }
}

zespolone losuj(zespolone a)
{//funkcja do zadania 7.2.7
    a.im=rand()%10-5;
    a.re=rand()%10-5;
    return a;
}
zespolone suma(zespolone a,zespolone b)
{//funkcja do zadania 7.2.7
    zespolone c;
    c.im=a.im+b.im;
    c.re=a.re+b.re;
    return c;

}
int main()
{
    srand(time(NULL));

    // ZADANIE 7.2.1
    /*
    //Zdefiniuj strukturê trojkat przechowuj¹c¹ d³ugoœci boków
    //trójk¹ta. Napisz funkcjê, która otrzymuje jako argument zmienn¹ typu
    //struct trojkat, i zwraca jako wartoœæ obwód trójk¹ta przekazanego
    //w argumencie.
    trojkat fig_1;
    cout << "Poda dlugosci bokow trojkata" << endl;
    cin>>fig_1.a>>fig_1.b>>fig_1.c;
    cout <<"Obwod tego trojkata wynosi: "<<obwod(fig_1);
    */

    // ZADANIE 7.2.2
    /*
    //Napisz funkcjê, która otrzymuje jako argumenty zmienn¹ troj1
    //typu struct trojkat zdefiniowanego w zadaniu 7.2.1 oraz zmienn¹
    //troj2 wskaŸnik na zmienn¹ typu struct trojkat, i przepisuje zawartoœæ
    //zmiennej troj1 do zmiennej wskazywanej przez troj2.
    trojkat troj1,troj2;
    trojkat* wsk=&troj2;
    troj1=losuj(troj1);
    przepisz(troj1,wsk);
    wyswietl(troj1);
    cout <<endl;
    wyswietl(wsk);
    */

    // ZADANIE 7.2.3
    /*
    //Zdefiniuj strukturê punkt s³u¿¹c¹ do przechowywania wspó³rzêdnych
    //punktów w trójwymiarowej przestrzeni kartezjañskiej.
    //Napisz funkcjê, która otrzymuje jako argumenty tablicê tab o argumentach
    //typu struct punkt oraz jej rozmiar, i zwraca jako wartoœæ
    //najmniejsz¹ spoœród odleg³oœci pomiêdzy punktami przechowywanymi
    //w tablicy tab. Zak³adamy, ¿e otrzymana w argumencie tablica
    //ma co najmniej dwa argumenty.
    int n;
    double odl;
    cout<<"Podaj rozmiar tablicy"<<endl;
    cin>>n;
    punkt tab[n];
    punkt *wsk=&tab[0];
    losuj(n,wsk);
    wyswietl(n,wsk);
    odl=najmniejsza_odleglosc(n,wsk);
    cout<<"Najmniejsza odleglosc wynosi:  "<<odl<<endl;
    */

    // ZADANIE 7.2.4
    /*
    //Napisz funkcję, która otrzymuje jako argumenty tablice tab1
    //i tab2 o argumentach typu struct punkt zdefiniowanego w rozwiązaniu
    //zadania 7.2.3 oraz ich rozmiar, i przepisuje zwartość tablicy
    //tab1 do tablicy tab2.
    int n;
    double odl;
    cout<<"Podaj rozmiar tablicy"<<endl;
    cin>>n;
    punkt tab1[n],tab2[n];
    punkt *wsk1=&tab1[0];
    punkt *wsk2=&tab2[0];
    losuj(n,wsk1);
    wyswietl(n,wsk1);
    przepisz(wsk1,wsk2,n);
    wyswietl(n,wsk2);
    */

    // ZADANIE 7.2.5
    /*
    //Zdefiniuj strukturę punkt10 służącą do przechowywania współrzędnych
    //punktów w dziesięciowymiarowej przestrzeni kartezjańskiej.
    //Do przechowywania poszczególnych wymiarów wykorzystaj tablicę
    //dziesięcioelementową.
    //Napisz funkcję, która otrzymuje jako argumenty tablice tab1 i tab2
    //typu struct punkt10 oraz ich wspólny rozmiar, i przepisuje zwartość
    //tablicy tab1 do tablicy tab2.
    int n;
    double odl;
    cout<<"Podaj rozmiar tablicy"<<endl;
    cin>>n;
    punkt10 tab1[n],tab2[n];
    punkt10 *wsk1=&tab1[0];
    punkt10 *wsk2=&tab2[0];
    losuj(n,wsk1);
    wyswietl(n,wsk1);
    przepisz(wsk1,wsk2,n);
    wyswietl(n,wsk2);
    */


    // ZADANIE 7.2.6
    /*
    //Zdefiniuj strukturę punktn służącą do przechowywania współrzędnych
    //punktów w n-wymiarowej przestrzeni kartezjańskiej. Do przechowywania
    //poszczególnych wymiarów wykorzystaj tablicę
    //n-elementową. W strukturze punktn przechowuj także ilość wymiarów
    //przestrzeni.
    //Napisz funkcję, która otrzymuje jako argumenty tablice tab1 i tab2
    //o argumentach typu struct punktn oraz ich wspólny rozmiar, i przepisuje
    //zwartość tablicy tab1 do tablicy tab2. Zakładamy, że tablica
    //tab2 jest pusta (czyli nie musimy się martwić o jej poprzednią zawartość).
    //DODATKOWO STWORZYŁEM TABELE TYCH STRUKTUR
    int n,m;
    double odl;
    cout<<"Podaj ilosc wymiarow 'n' "<<endl;
    cin>>n;
    cout<<"Podaj wymiar tablic 'm' "<<endl;
    cin>>m;
    punktn tab1[m],tab2[m];

    for (int i=0;i<m;i++)
    {

        tab1[i].tab=new double [n];
        tab1[i].n=n;
        tab2[i].tab=new double [n];
        tab2[i].n=n;
    }
    punktn *wsk1=&tab1[0];
    punktn *wsk2=&tab2[0];
    losuj(m,wsk1);
    wyswietl(m,wsk1);
    przepisz(wsk1,wsk2,m);
    wyswietl(m,wsk2);
    */

    // ZADANIE 7.2.7
    //Zdefiniuj strukturę zespolone służącą do przechowywania liczb zespolonych.
    //Zdefiniowana struktura powinna zawierać pola im i re typu
    //double służące do przechowywania odpowiednio części urojonej
    //i rzeczywistej liczby zespolonej.
    //Napisz funkcję dodaj, która dostaje dwa argumenty typu zespolone
    //i zwraca jako wartość ich sumę.
    zespolone a,b,c;
    a=losuj(a);
    b=losuj(b);
    c=suma(a,b);
    cout<<"Liczby zespolone:" <<a.re<<"   "<<a.im<<"   "<<b.re<<"  "<<b.im<<endl;
    cout<<"Ich suma: "<<c.re<<"   "<<c.im;





    return 0;
}
