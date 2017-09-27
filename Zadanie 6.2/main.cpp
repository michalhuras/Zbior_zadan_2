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
        wsk[i][j]=rand()%100+1;
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
{ //funkcja do zadania 6.2.1
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
    //Napisz funkcjê, która dostaje jako argumenty dwuwymiarow¹ tablicê
    //tablic o elementach typu int oraz jej wymiary, i zwraca jako
    //wartoœæ indeks wiersza o najwiêkszej œredniej wartoœci elementów.
    //Przyjmujemy, ¿e dwa elementy le¿¹ w tym samym wierszu, je¿eli maj¹
    //taki sam pierwszy indeks.


    return 0;
}
