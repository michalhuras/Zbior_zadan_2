#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;
int **implementacja1(int n,int m)
{//funkcja do zadania 6.2.1
int **t=new int*[n];
for (int i=0;i<n;i++)
t[i]=new int[m];
return t;
}

void kasowanie(int**w,int n,int m)
{ //funkcja do zadania 6.2.3
for (int i=0;i<n;i++)
        delete [] w[i];
delete [] w;
}

void zerowanie (int **wsk,int n,int m)
{ //funkcja do zadania 6.2.8
    for (int i=0;i<n;i++)
    {
       for (int j=0;j<m;j++)
       {
        wsk[i][j]=0;
        cout <<wsk[i][j];
       }
       cout <<endl;
    }

}

void wyswietl(int **wsk,int n,int m)
{ //funkcja do zadania 6.2.12
    for (int i=0;i<n;i++)
    {
       for (int j=0;j<m;j++)
       {
        cout <<wsk[i][j]<<"    ";
       }
       cout <<endl;
    }
}

void losuj(int **wsk,int n,int m)
{ //funkcja do zadania 6.2.12
    srand(time(NULL));
    for (int i=0;i<n;i++)
    {
       for (int j=0;j<m;j++)
       {
        wsk[i][j]=rand()%10-5;
       }
    }
}

int suma(int **wsk,int n,int m)
{ //funkcja do zadania 6.2.12
    int suma=0;
    for (int i=0;i<n;i++)
    {
       for (int j=0;j<m;j++)
       {
           suma +=wsk[i][j];
       }
    }
    return suma;
}

int ***implementacja1(int n,int m,int k)
{//funkcja do zadania 6.2.14
    int ***tab;
    tab=new int **[n];
    for (int i=0; i<n; i++)
    {
        tab[i]=new int *[m];
        for (int j=0; j<m; j++)
        {
            tab[i][j]=new int [k];
        }
    }
    return tab;
}

void losuj(int ***wsk,int n,int m, int k)
{ //funkcja do zadania 6.2.14
    srand(time(NULL));
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            for (int p=0; p<k; p++)
            {
                wsk[i][j][p]=rand()%100+1;
            }
        }
    }
}

void wyswietl(int ***wsk,int n,int m, int k)
{ //funkcja do zadania 6.2.14
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            for (int p=0; p<k; p++)
            {
                cout<<wsk[i][j][p]<<"   ";
            }
            cout<<endl;
        }
        cout<<endl<<endl;
    }
}


int suma(int ***wsk,int n,int m, int k)
{ //funkcja do zadania 6.2.14
    int suma=0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            for (int p=0; p<k; p++)
            {
                suma+=wsk[i][j][p];
            }
        }
    }
    return suma;
}

void kasowanie(int***tab,int n,int m,int k)
{ //funkcja do zadania 6.2.14
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            delete []tab[i][j];
        }
        delete []tab[i];
    }
    delete []tab;
}

int indeks(int **wsk,int n,int m)
{//funkcja do zadania 6.2.16
    int ind=0,wartosc=0,suma=0;
    for (int j=0; j<m; j++)
    {
        suma=suma+wsk[0][j];
    }
    suma=0;
    for (int i=1; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            suma=suma+wsk[i][j];
        }
        if (wartosc<suma)
        {
            wartosc=suma;
            ind=i;
        }
        suma=0;
    }
    return ind;
}

void odwr_kolejnosc(int **wsk,int n,int m)
{//funkcja do zadania 6.2.21
    int** wsk2;
    wsk2=implementacja1(n,m);
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
        wsk2[i][j]=wsk[i][m-j-1];
        }
    }
       for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
        wsk[i][j]=wsk2[i][j];
        }
    }
        kasowanie(wsk2,n,m);
}

void zamiana_wierszy(int **wsk,int n,int m)
{//funkcja do zadania 6.2.23
    int** wsk2;
    wsk2=implementacja1(n,m);
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            if (i==0)
                wsk2[i][j]=wsk[n-1][j];
            else
                wsk2[i][j]=wsk[i-1][j];
        }
    }
       for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
        wsk[i][j]=wsk2[i][j];
        }
    }
        kasowanie(wsk2,n,m);
}

void zamiana_kolumn(int **wsk,int n,int m)
{//funkcja do zadania 6.2.23
    int** wsk2;
    wsk2=implementacja1(n,m);
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            if (j==0)
                wsk2[i][j]=wsk[i][m-1];
            else
                wsk2[i][j]=wsk[i][j-1];
        }
    }
       for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
        wsk[i][j]=wsk2[i][j];
        }
    }
        kasowanie(wsk2,n,m);
}


void zamiana_skos(int **wsk,int n,int m)
{//funkcja do zadania 6.2.25
    int pomocnicza;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<i; j++)
        {
            pomocnicza=wsk[i][j];
            wsk[i][j]=wsk[j][i];
            wsk[j][i]=pomocnicza;
        }
    }
}


int **transponowana(int **wsk,int n,int m)
{//funkcja do zadania 6.2.26
    int** wsk2;
    wsk2=implementacja1(m,n);
    cout <<endl;
    for (int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            wsk2[j][i]=wsk[i][j];

    return wsk2;
}

int **mnozenie_macierzy(int **wsk1,int **wsk2,int n,int m,int k)
{//funkcja do zadania 6.2.35
    int** wsk3;
    wsk3=implementacja1(n,k);
    cout <<endl;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            wsk3[i][j]=0;
            for (int p=0;p<n+1;p++)
            {
                wsk3[i][j]=wsk3[i][j]+(wsk1[i][p]*wsk2[p][j]);
            }
        }
    }

   return wsk3;
}

int wyznacznik(int **wsk1,int n)
{
    int wyz=0,pom=1,i=0,j=0;
    for (j=0;j<n;j++)
    {
        pom=1;
        i=0;
         for (i=0;i<n;i++)
         {
             if (i+j>n-1)
             {
                pom=pom*wsk1[i][i+j-n];
             }

             else
             {
                 pom=pom*wsk1[i][i+j];
             }
         }
         wyz=wyz+pom;
    }
        for (j=n-1;j>=0;j--)
    {
        pom=1;
        i=n-1;
         for (i=0;i<n;i++)
         {
             if (j-i<0)
             {
                pom=pom*wsk1[i][j-i+n];
             }

             else
             {
                 pom=pom*wsk1[i][j-i];
             }
         }
         wyz=wyz-pom;
    }
return wyz;
}
int main()
{
    // ZADANIE 6.2.1
    /*
    //Napisz funkcjê, która dostaje jako argument dodatnie liczby ca³kowite
    //n i m, tworzy dynamiczn¹ dwuwymiarow¹ tablicê tablic elementów
    //typu int o wymiarach n na m, i zwraca jako wartoœæ wskaŸnik do niej.
    int n,m;
    cout << "Podaj wymiary tablicy: n= " << endl;
    cin>>n;
    cout << "m= " << endl;
    cin>>m;
    int** wsk;
    wsk=implementacja1(n,m);
    kasowanie(wsk,n,m);
    */

    // ZADANIE 6.2.2
    /*
    //Napisz funkcjê, która dostaje jako argument dodatnie liczby
    //ca³kowite n i m, tworzy dynamiczn¹ dwuwymiarow¹ tablicê elementów
    //typu int o wymiarach n na m i zwraca jako wartoœæ wskaŸnik do niej.
    int n,m;
    cout << "Podaj wymiary tablicy: n= " << endl;
    cin>>n;
    cout << "m= " << endl;
    cin>>m;
    int** wsk;
    //wsk=implementacja2(n,m);
    //Do wykonania tego zadania w C++ trzeba umieæ tworzyæ klasê
    */

    // ZADANIE 6.2.3
    /*
    //Napisz funkcjê, która dostaje jako argumenty wskaŸnik do dwuwymiarowej
    //tablicy tablic elementów typu int oraz jej wymiary: dodatnie
    //liczby ca³kowite n i m, i usuwa z pamiêci otrzyman¹ tablicê.
    int n,m;
    cout << "Podaj wymiary tablicy: n= " << endl;
    cin>>n;
    cout << "m= " << endl;
    cin>>m;
    int** wsk;
    wsk=implementacja1(n,m);
    kasowanie (wsk,n,m);
    */

    // ZADANIE 6.2.8
    /*
    //Napisz funkcjê, która dostaje w argumentach dwuwymiarow¹ tablicê
    //elementów typu int, o pierwszym wymiarze podanym jako drugi
    //argument funkcji oraz drugim wymiarze równym 100 i wype³nia j¹
    //zerami.
    int n,m;
    cout << "Podaj wymiary tablicy: n= " << endl;
    cin>>n;
    cout << "m= " << endl;
    cin>>m;
    int** wsk;
    wsk=implementacja1(n,m);
    zerowanie (wsk,n,m);
    kasowanie(wsk,n,m);
    */

    // ZADANIE 6.2.10
    /*
    //Napisz funkcjê, która dostaje w argumentach dwuwymiarow¹ tablicê
    //tablic o elementach typu int oraz jej wymiary n i m, i zwraca jako
    //wartoœæ sumê wartoœci elementów tablicy.
    int n,m,c;
    cout << "Podaj wymiary tablicy: n= " << endl;
    cin>>n;
    cout << "m= " << endl;
    cin>>m;
    int** wsk;
    wsk=implementacja1(n,m);
    losuj(wsk,n,m);
    wyswietl(wsk,n,m);
    c=suma (wsk,n,m);
    cout << endl<<c;
    */

    // ZADANIE 6.2.14
    /*
    //Napisz funkcjê, która dostaje w argumentach tablicê trójwymiarow¹
    //o elementach typu int o wymiarach 100 × 100 × 100, i zwraca
    //jako wartoœæ sumê wartoœci elementów tablicy.
    int n,m,k,c;
    cout << "Podaj wymiary tablicy: n= " << endl;
    cin>>n;
    cout << "m= " << endl;
    cin>>m;
    cout << "k= " << endl;
    cin>>k;
    int*** wsk;
    wsk=implementacja1(n,m,k);
    losuj(wsk,n,m,k);
    wyswietl(wsk,n,m,k);
    c=suma (wsk,n,m,k);
    cout << endl<<c;
    */

    // ZADANIE 6.2.16
    /*
    //Napisz funkcjê, która dostaje jako argumenty dwuwymiarow¹ tablicê
    //tablic o elementach typu int oraz jej wymiary, i zwraca jako
    //wartoœæ indeks wiersza o najwiêkszej œredniej wartoœci elementów.
    //Przyjmujemy, ¿e dwa elementy le¿¹ w tym samym wierszu, je¿eli maj¹
    //taki sam pierwszy indeks.
    int n,m,c;
    cout << "Podaj wymiary tablicy: n= " << endl;
    cin>>n;
    cout << "m= " << endl;
    cin>>m;
    int** wsk;
    wsk=implementacja1(n,m);
    losuj(wsk,n,m);
    wyswietl(wsk,n,m);
    c=indeks(wsk,n,m);
    cout << endl<<c;
    kasowanie(wsk,n,m);
    */

    // ZADANIE 6.2.21
    /*
    //Napisz funkcję, która dostaje jako argumenty dwuwymiarową tablicę
    //tablic o elementach typu int oraz jej wymiary, i odwraca kolejność
    //elementów we wszystkich wierszach otrzymanej tablicy (przyjmujemy,
    //że dwa elementy tablicy leżą w tym samym wierszu, jeżeli
    //mają taką samą pierwszą współrzędną).
    //taki sam pierwszy indeks.
    int n,m;
    cout << "Podaj wymiary tablicy: n= " << endl;
    cin>>n;
    cout << "m= " << endl;
    cin>>m;
    int** wsk;
    wsk=implementacja1(n,m);
    losuj(wsk,n,m);
    wyswietl(wsk,n,m);
    odwr_kolejnosc(wsk,n,m);
    cout <<endl;
    wyswietl(wsk,n,m);
    kasowanie(wsk,n,m);
    */

    // ZADANIE 6.2.23
    /*
    //Napisz funkcję, która dostaje jako argumenty dwuwymiarową
    //tablicę tablic o elementach typu int oraz jej wymiary, i zmienia kolejność
    //wierszy w tablicy w taki sposób, że wiersz pierwszy ma się znaleźć
    //na miejscu drugiego, wiersz drugi ma się znaleźć na miejscu trzeciego
    //itd., natomiast ostatni wiersz ma się znaleźć na miejscu pierwszego
    //(przyjmujemy, że dwa elementy tablicy leżą w tym samym wierszu
    //jeżeli mają taką samą pierwszą współrzędną).
    int n,m;
    cout << "Podaj wymiary tablicy: n= " << endl;
    cin>>n;
    cout << "m= " << endl;
    cin>>m;
    int** wsk;
    wsk=implementacja1(n,m);
    losuj(wsk,n,m);
    wyswietl(wsk,n,m);
    zamiana_wierszy(wsk,n,m);
    cout <<endl;
    wyswietl(wsk,n,m);
    kasowanie(wsk,n,m);
    */

    // ZADANIE 6.2.24
    /*
    //Napisz funkcję, która dostaje jako argumenty dwuwymiarową tablicę
    //tablic o elementach typu int oraz jej wymiary, i zmienia kolejność
    //kolumn w tablicy w taki sposób, że kolumna pierwsza ma się znaleźć
    //na miejscu drugiej, kolumna druga ma się znaleźć na miejscu trzeciej
    //itd., natomiast ostatnia kolumna ma się znaleźć na miejscu pierwszej
    //(przyjmujemy, że dwa elementy tablicy leżą w tej samej kolumnie,
    //jeżeli mają taką samą drugą współrzędną).
    int n,m;
    cout << "Podaj wymiary tablicy: n= " << endl;
    cin>>n;
    cout << "m= " << endl;
    cin>>m;
    int** wsk;
    wsk=implementacja1(n,m);
    losuj(wsk,n,m);
    wyswietl(wsk,n,m);
    zamiana_kolumn(wsk,n,m);
    cout <<endl;
    wyswietl(wsk,n,m);
    kasowanie(wsk,n,m);
    */

    // ZADANIE 6.2.25
    /*
    //Napisz funkcję, która dostaje jako argumenty dwuwymiarową kwadratową
    //tablicę tablic tab o elementach typu int oraz jej wymiar,
    //i zmienia kolejność elementów w otrzymanej tablicy w następujący
    //sposób: dla dowolnych k i j element tab[k][j] ma zostać zamieniony
    //miejscami z elementem tab[j][k].
    int n;
    cout << "Podaj wymiar tablicy: n= " << endl;
    cin>>n;
    int** wsk;
    wsk=implementacja1(n,n);
    losuj(wsk,n,n);
    wyswietl(wsk,n,n);
    zamiana_skos(wsk,n,n);
    cout <<endl;
    wyswietl(wsk,n,n);
    kasowanie(wsk,n,n);
    */

    // ZADANIE 6.2.26
    /*
    //Napisz funkcję, która dostaje jako argumenty dwuwymiarową prostokątną
    //tablicę tablic tab1 o wymiarach n × m i elementach typu int
    //oraz jej wymiary, i zwraca jako wartość wskaźnik do nowo utworzonej
    //dwuwymiarowej tablicy tablic tab2 o wymiarach m × n zawierającej
    //transponowaną macierz przechowywaną w tablicy tab1 (czyli dla dowolnych
    //k i j zachodzi tab1[k][j]=tab2[j][k].
    int n,m;
    cout << "Podaj wymiary tablicy: n= " << endl;
    cin>>n;
    cout << "m= " << endl;
    cin>>m;
    int** wsk;
    int** wsk2;
    wsk=implementacja1(n,m);
    losuj(wsk,n,m);
    wyswietl(wsk,n,m);
    wsk2=transponowana(wsk,n,m);
    cout <<endl;
    wyswietl(wsk2,m,n);
    kasowanie(wsk,n,m);
    kasowanie(wsk2,m,n);
    */

    // ZADANIE 6.2.35
    /*
    //Napisz funkcję, która otrzymuje w argumentach dwie prostokątne
    //dwuwymiarowe tablice tablic elementów typu int o wymiarach odpowiednio
    //n×m i m×k oraz ich wymiary, i zwraca jako wartość wynik
    //mnożenia macierzy przechowywanych w przekazanych argumentach.
    //Wynik powinien zostać zwrócony w nowo utworzonej tablicy tablic.
    int n,m,k;
    cout << "Podaj wymiary tablicy: n= " << endl;
    cin>>n;
    cout << "m= " << endl;
    cin>>m;
    cout << "k= " << endl;
    cin>>k;
    int** wsk1;
    int** wsk2;
    int** wsk3;
    wsk1=implementacja1(n,m);
    wsk2=implementacja1(m,k);
    losuj(wsk1,n,m);
    losuj(wsk2,m,k);
    wyswietl(wsk1,n,m);
    cout <<endl;
    wyswietl(wsk2,m,k);
    wsk3=mnozenie_macierzy(wsk1,wsk2,n,m,k);
    cout <<endl;
    wyswietl(wsk3,n,k);

    kasowanie(wsk1,n,m);
    kasowanie(wsk2,m,k);
    kasowanie(wsk3,n,k);
    */

    // ZADANIE 6.2.36
    //Napisz funkcję otrzymującą dwa argumenty: dodatnią liczbę
    //całkowitą n i dwuwymiarową kwadratową tablicę tablic elementów typu
    //int o wymiarach n×n, i zwraca jako wartość wyznacznik macierzy
    //przechowywanej w otrzymanej w argumencie tablicy.
    int n,wyz;
    cout << "Podaj wymiary tablicy: n= " << endl;
    cin>>n;
    int** wsk1;
    wsk1=implementacja1(n,n);
    losuj(wsk1,n,n);
    wyswietl(wsk1,n,n);
    cout <<endl;
    wyz=wyznacznik(wsk1,n);
    cout <<wyz<<"    "<<wsk1[2][3]<<endl;
    kasowanie(wsk1,n,n);




    return 0;
}
