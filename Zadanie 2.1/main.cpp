#include <iostream>
#include <math.h>
#include <cmath>
#include <string>
#include <stdlib.h>

using namespace std;
int modul(int n)
{
    //DO ZADANIA 2.2.1
    if (n<0) return -n;
    else return n;
}

    void zlicz()
    {
    static int z=0;
    z++;
    cout <<"Funkcja zostala wywolana  "<<z<< " razy"<< endl;
    }

unsigned int funkcja_rekurencyjna(unsigned int n)
{
    if (n==0) return 1;
    else if (n==1) return 1;
    else
    {
        if (n%2==0) return funkcja_rekurencyjna(n-1)+n ;
        else return funkcja_rekurencyjna(n-1)*n ;
    }
}

unsigned int funkcja_rekurencyjna_2(unsigned int n)
{
    cout << "Funkcja dla:  " <<n;
    if ((n==0) || (n==1) || (n==2)) return 1;
    else
    {
        int a;
        a=floor(n%3);
        cout <<"   a=  "<<a<<"   n=  "<<n<<endl;
        if (n%3==0) return funkcja_rekurencyjna_2(n-1)-funkcja_rekurencyjna_2(n-2) ;
        else if (a==1)  return 5*funkcja_rekurencyjna_2(n-1)+4 ;
        else if (a==2)  return funkcja_rekurencyjna_2(n-1);
    }
}

unsigned int potega(unsigned int wynik=1,unsigned int n=1,unsigned int m=2)
{
    if (n==0) return 0;
    if (m==0) return wynik;
    else return potega(wynik,n,m-1)*n;
}

unsigned int pot(unsigned int wynik=1,unsigned int n=1,unsigned int m=2)
{
    if (n==0) return 0;
    if (m==0) return wynik;
    else return potega(wynik,n,m-1)*n;
}

 int pot(int wynik=1,int n=1,int m=2)
{
    if (n==0) return 0;
    if (m==0) return wynik;
    else return potega(wynik,n,m-1)*n;
}

double pot(double wynik=1,double n=1,double m=2)
{
    if (n==0) return 0;
    if (m==0) return wynik;
    else return pot(wynik,n,m-1)*n;
}



int main()
{
    //ZADANIE 2.2.1
    /*
    //Napisz program, który wczytuje ze standardowego wejścia liczbę
    //całkowitą n i wypisuje na standardowe wyjście wartość bezwzględną
    //z n. Do rozwiązania zadania nie używaj funkcji bibliotecznych za wyjątkiem
    //operacji wejścia/wyjścia. W programie użyj samodzielnie zaimplementowanej
    //funkcji liczącej wartość bezwzględną.
    int n;
    cout << "Wprowadź liczbę n" << endl;
    cin >>n;
    cout << "Moduł liczby n wynosi:  " <<modul(n)<<endl;
    */

    //ZADANIE 2.2.9
    /*
    //Napisz funkcję, która dostaje jako argumenty liczbę całkowitą m
    //(m > 1) oraz nieujemną liczbę n i zwraca jako wartość  m√n. Rozwiąż
    //zadanie nie wykorzystując funkcji bibliotecznych.
    int m,n,i,j,wynik=1;
    cout << "Wprowadź liczbę m (m>1)" << endl;
    cin >>m;
    cout << "Wprowadź liczbę n" << endl;
    cin >>n;

    for (i=1;i<=n;i++)
    {
        wynik=i;
         for (j=1;j<m;j++)
         {
        wynik=wynik*i;
         }
         if (wynik==n) cout<<"pierwiastek wynosi:  "<<i<<endl;

    }
    */

    //ZADANIE 2.2.13 a)
    /*
    //Napisz funkcję, która dostaje jako argument dodatnią liczbę
    //całkowitą n i wypisuje na standardowym wyjściu wszystkie możliwe
    //rozkłady liczby n na sumy dwóch kwadratów dodatnich liczb całkowitych.
    //Rozważ dwa przypadki:
    //(a) gdy „a2 + b2” i „b2 + a2” dla a 6= b traktujemy jako dwa równe
    //rozkłady,
    //(b) gdy „a2 + b2” i „b2 + a2” traktujemy jako ten sam rozkład i wypisujemy
    //tylko jedne z nich.
    //Jeżeli zajdzie taka potrzeba, możesz w rozwiązaniu używać funkcji
    //pomocniczych.
    int n,a,b;
    cout << "Wprowadź liczbę n" << endl;
    cin >>n;
    for (a=1;a<n;a++)
    {
      for (b=1;b<n;b++)
        {
            if(a*a+b*b==n) cout<< "a=  "<<a<<"   b=  "<<b<<endl;
        }
    }
    */

    //ZADANIE 2.2.13 b)
    /*
    int n,a,b;
    cout << "Wprowadź liczbę n" << endl;
    cin >>n;
    for (a=1;a<n;a++)
    {
      for (b=n;b>=a;b--)
        {
            if(a*a+b*b==n) cout<< "a=  "<<a<<"   b=  "<<b<<endl;
        }
    }
    */

    //ZADANIE 2.2.17
    /*
    //Napisz funkcję, która zlicza i wypisuje na standardowym wyjściu
    //liczbę swoich wywołań.
    zlicz();
    zlicz();
    zlicz();
    */

     //ZADANIE 2.2.25
     /*
    //Napisz funkcję rekurencyjną, która dla otrzymanej w argumencie
    //nieujemnej liczby całkowitej n zwraca wartość elementu o indeksie n
    //ciągu zdefiniowanego w następujący sposób
    //a0 = a1 = 1
    //an = an−1 + n dla n parzystych
    //an = an−1 ∗ n dla n nieparzystych.

    unsigned int n;
    cout <<"Podaj element ciagu"<<endl;
    cin >> n;
    cout <<"Wynik funckji rekurencyjnej: " <<  funkcja_rekurencyjna(n);
    */

    //ZADANIE 2.2.26
    /*
    //Napisz funkcję rekurencyjną, która dla otrzymanej w argumencie
    //nieujemnej liczby całkowitej n zwraca wartość elementu o indeksie
    //n ciągu zdefiniowanego w następujący sposób
    //a0 = a1 = a2 = 1
    //oraz dla k > 2
    //a3·k = a3·k−1 + a3·k−2
    //a3·k+1 = 5 ∗ a3·k + 4
    //a3·k+2 = a3·k+1.

    unsigned int n;
    cout <<"Podaj element ciagu"<<endl;
    cin >> n;
    cout <<"Wynik funckji rekurencyjnej: " <<  funkcja_rekurencyjna_2(n);
    */

    //ZADANIE 2.2.30
    /*
    //Napisz funkcję, która dostaje jako argumenty nieujemne
    //liczby całkowite n i m, z których co najmniej jedna jest różna od zera,
    //i zwraca jako wartość nm. Jeżeli drugi z argumentów nie zostanie
    //podany, funkcja powinna zwrócić wartość n2.

    unsigned int n,m,wynik=1;
    cout <<" Podaj podstawe potęgi"<<endl;
    cin >>n;
    cout <<" Podaj wykładnik potęgi. "<<endl;
    cin >>m;
    cout <<" Wynik potegowania wynosi: "<< potega(wynik,n,m)<<endl;
    */

    //ZADANIE 2.2.36
    /*
    //Napisz rodzinę dwuargumentowych funkcji pot, z których
    //każda jako argumenty otrzymuje liczbę n i nieujemną liczbę całkowitą
    //m typu unsigned int (zakładamy, że co najmniej jeden z argumentów
    //jest różny od zera) i zwraca jako wartość nm. Przeciąż funkcję
    //pot dla n o typach: double, int, unsigned int. Wynik zwrócony
    //przez każdą z funkcji pot powinien być tego samego typu co n.
    double n,m,wynik=1;
    cout <<" Podaj podstawe potęgi"<<endl;
    cin >>n;
    cout <<" Podaj wykładnik potęgi. "<<endl;
    cin >>m;
    cout <<" Wynik potegowania wynosi: "<< pot(wynik,n,m)<<endl;
    */


    return 0;
}
