#include <iostream>
#include <time.h>
#include <cstdlib>
#include <math.h>

using namespace std;

/*
struct trojkat{//struktura do zadania 7.2.1
int a,b,c;
};
*/

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

struct student{//struktura do zadania 7.2.8
string imie;
string nazwisko;
string adres;
string pesel;
string kierunek;
string numer_legitymacji;
};

struct lista{//struktura do zadania 7.2.9
int a;
struct lista *b;
};

union super_int{//unia do zadania 7.2.10
int i;
unsigned int u;
};

union liczba{//unia do zadania 7.2.11
int i;
double w;
};

struct dane{//struktura do zadania 7.2.11
int tp;
liczba zaw;
};


/*
struct trojkat{unsigned a,h;//struktura do zadania 7.2.13
};
struct prostokat{unsigned a,b;//struktura do zadania 7.2.13
};
struct rownoleglobok{unsigned a,h;//struktura do zadania 7.2.13
};
struct trapez{unsigned k,l;//struktura do zadania 7.2.13
};

union wymiary{
trojkat troj;
prostokat prost;
rownoleglobok rowno;
trapez tra;
};

struct figura{//struktura do zadania 7.2.13
int fig;
wymiary wym;
};
*/
/*
enum czworokat{ //typ wyliczeniowy do zadania 7.2.14
kwadrat,trapez,romb,rownoleglobok,trapez};
*/

enum Plec {//unia do zadania 7.2.17
mezczyzna,kobieta};

enum facet{//typ wyliczeniowy do zadania 7.2.17
wolny,zonaty};

enum babka{//typ wyliczeniowy do zadania 7.2.17
wolna,mezatka};

union cywilny {//unia do zadania 7.2.17
facet mez;
babka kob;
};

union sup_int{//unia do zadania 7.2.18
unsigned int l;
unsigned char t[4];
};

struct dane_osobowe{//struktura do zadania 7.2.17
string imie;
string nazwisko;
Plec plec;
cywilny stan_cywilny;
};

/*
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
*/

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

void wczytaj_dane(student *a)
{//funkcja do zadania 7.2.8
    cout<<"Podaj kolejne dane studenta:  "<<endl;
    cout <<"Imie:  ";
    cin >>a->imie;
    cout <<"Nazwisko:  ";
    cin>>a->nazwisko;
    cin.sync();
    cout <<"Adres: ";
    getline(cin,a->adres);
    cout<<"Pesel:  ";
    getline(cin,a->pesel);
    cout<<"Kierunek:  ";
    getline(cin,a->kierunek);
    cout<<"Numer legitymacji:  ";
    getline(cin,a->numer_legitymacji);
}

void funkcja_do_zadania11()
{//funkcja do zadania 7.2.11
    dane a;
    cout<<"Jeżeli liczba całkowita to wpisz 1, jeżeli zmiennoprzecinkowa 0"<<endl;
    cin >>a.tp;
    cout<<"Podaj drugą liczbę"<<endl;
    if (a.tp==0)
        cin>>a.zaw.w;
    else
        cin>>a.zaw.i;
    if (a.tp==0)
        cout<<endl<<a.zaw.w;
    else
        cout<<endl<<a.zaw.i;
}
/*
void pole(figura f)
{//funkcja do zadania 7.2.13
    f.fig=1;

    switch (f.fig){
        case 0:
            cout<<"Pole wynosi:  "<<f.wym.troj.a*f.wym.troj.h/2;
            break;
        case 1:
            cout<<"Pole wynosi:  "<<f.wym.prost.a*f.wym.prost.b;
            break;
        case 2:
            cout<<"Pole wynosi:  "<<f.wym.rowno.a*f.wym.rowno.h;
           break;
        case 3:
            cout<<"Pole wynosi:  "<<f.wym.tra.k*f.wym.tra.l/2;
            break;
                }
}
*/

void wczytaj(dane_osobowe *wsk,unsigned n)
{//funkcja do zadania 7.2.17
    int i,d;

    cout<<"Inicjalizuje procedurę wczytywania danych:  "<<endl;
    for(i=0;i<n;i++)
    {cout<<"Podaj imię:  "<<endl;
        cin>>wsk[i].imie;
     cout<<"Podaj nazwisko:  "<<endl;
        cin>>wsk[i].nazwisko;
     cout<<"Jeżeli mężczyzna wpisz 0, dla kobiety 1"<<endl;
        cin>>d;
        if(d==0)
        {wsk[i].plec=mezczyzna;
        cout<<"Jeżeli wolny wpisz 0, dla zonatego 1"<<endl;
        cin>>d;
        if(d==0)wsk[i].stan_cywilny.mez=wolny;
        else wsk[i].stan_cywilny.mez=zonaty;
        }
        else
        {wsk[i].plec=kobieta;
        cout<<"Jeżeli wolnej wpisz 0, dla mezatki 1"<<endl;
        cin>>d;
        if(d==0)wsk[i].stan_cywilny.kob=wolna;
        else wsk[i].stan_cywilny.kob=mezatka;
        }
    }
}

void wyswietl(dane_osobowe *wsk,unsigned n)
{//funkcja do zadania 7.2.17
    int i;
    cout<<endl<<"Inicjalizuje procedurę wypisywania danych"<<endl;

    for(i=0;i<n;i++)
    {cout<<"Imię        Nazwisko        Plec        Stan cywilny   "<<endl;
     cout<<wsk[i].imie<<"   "<<wsk[i].nazwisko<<"   "<<wsk[i].plec<<"   ";
     if (wsk[i].plec==mezczyzna)
     cout<<wsk[i].stan_cywilny.mez<<endl;
     else
    cout<<wsk[i].stan_cywilny.kob<<endl;
    }
}

unsigned int funkcja(unsigned int a,unsigned int b)
{//funkcja do zadania 7.2.19
    union sup_int poma,pomb,pomwym; //tworzymy zmienne typu unia
    poma.l=a; //przypisujemy im wartości
    pomb.l=b;
    pomwym.t[0]=poma.t[0]*pomb.t[0];  //porównujemy te wartosci
    pomwym.t[1]=poma.t[1]*pomb.t[1];
    pomwym.t[2]=poma.t[2]*pomb.t[2];
    pomwym.t[3]=poma.t[3]*pomb.t[3];
    return pomwym.l;
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
    //  punktów w trójwymiarowej przestrzeni kartezjañskiej.
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
    /*
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
    */


    // ZADANIE 7.2.8
    /*
    //Zdefiniuj strukturę student służącą do przechowywania danych osobowych
    //studenta (struktura powinna zawierać takie pola, jak: imie,
    //nazwisko, adres, pesel, kierunek i numer legitymacji).
    //Napisz funkcję, która otrzymuje jako argument wskaźnik na strukturę
    //student i wczytuje dane ze standardowego wejścia do rekordu
    //wskazywanego przez argument funkcji.
    student a;
    student *wsk=&a;
    wczytaj_dane(wsk);
    cout <<"Imie:  "<<a.imie<<endl<<"Nazwisko:  "<<a.nazwisko<<endl;
    cout <<"Adres: "<<a.adres<<endl<<"Pesel:  "<<a.pesel<<endl;
    cout<<"Kierunek:  "<<a.kierunek<<endl<<"Numer legitymacji:  "<<a.numer_legitymacji<<endl;
    */

    // ZADANIE 7.2.9
    /*
    //Zdefiniuj strukturę lista posiadającą dwa pola: jedno typu int
    //oraz drugie będące wskaźnikiem do definiowanego typu.
    */


    // ZADANIE 7.2.10
    //Zdefiniuj unię super_int, w której będzie można przechowywać
    //zarówno zmienne typu int, jak i unsigned int.



    // ZADANIE 7.2.11
    /*
    //Zdefiniuj unię Liczba, która może służyć w zależności od potrzeb
    //do przechowywania liczby wymiernej lub liczby całkowitej. Zdefiniuj
    //strukturę Dane, o dwóch polach polu tp typu int oraz polu zaw typu
    //Liczba.
    //Napisz bezargumentową funkcję, która wczytuje ze standardowego
    //wejścia zawartość do struktury Dane i zwraca ją jako wartość. Funkcja
    //powinna pytać użytkownika, czy chce wczytać liczbę całkowitą,
    //czy wymierną oraz w zależności od jego wyboru wstawić do pola tp
    //wartość 0 lub 1. Następnie funkcja powinna wczytać do pola zaw wartość
    //odpowiedniego typu.
    funkcja_do_zadania11();
    */

    // ZADANIE 7.2.13
    /*
    //Zdefiniuj strukturę figura przechowującą wymiary figur geometrycznych
    //niezbędne do obliczenia pola. Struktura powinna mieć możliwość
    //przechowywania wymiarów takich figur, jak: trójkąt, prostokąt,
    //równoległobok i trapez. Rodzaj przechowywanej figury powinien być
    //zakodowany w wartości pola fig typu int. Definiując strukturę, staraj
    //się zużyć jak najmniej pamięci.
    //Napisz funkcję pole, która dostaje jako argument zmienną f typu
    //struct figura i zwraca jako wartość pole figury której wymiary przechowuje
    //zmienna f.
    figura f;
    f.fig=1;
    f.wym.prost.a=9;
    f.wym.prost.b=6;
    pole(f);
    */

    // ZADANIE 7.2.14
    /*
    //Zdefiniuj typ wyliczeniowy czworokat, mogący przyjmować wartości
    //odpowiadające nazwom różnych czworokątów.
    */

    // ZADANIE 7.2.17
    /*
    //Zdefiniuj strukturę dane osobowe zawierającą pola: imie,
    //nazwisko, plec, stan_cywilny. W zależności od płci pole
    //stan_cywilny powinno móc mieć jedną z dwóch wartości wolny
    //lub zonaty dla mężczyzn i wolna lub mezatka dla kobiet.
    //Napisz funkcję wczytaj o dwóch argumentach: tablicy tab o elementów
    //typu stan_cywilny i jej rozmiarze. Funkcja powinna wczytywać
    //do komórek tablicy tab wartości podane na standardowym wejściu.
    unsigned n=3;
    dane_osobowe tabela[n];
    dane_osobowe *wsk=&tabela[0];
    wczytaj(wsk,n);
    wyswietl(wsk,n);
    */


    // ZADANIE 7.2.18
    /*
    //Zdefiniuj złożony typ danych dzięki któremu będzie można odnosić
    //się do kolejnych bajtów zmiennej typu unsigned int
    //jak do kolejnych elementów tablicy.
    */


    // ZADANIE 7.2.19
    //Wykorzystując typ danych zdefiniowany w rozwiązaniu zadania
    //18 napisz funkcję, która dostaje w argumentach dwie nieujemne liczby
    //całkowite typu unsigned int i zwraca jako wartość nieujemną liczbę
    //całkowitą, której kolejne bajty są iloczynami modulo 256 odpowiadających
    //sobie bajtów liczb podanych w argumentach.





    return 0;
}
