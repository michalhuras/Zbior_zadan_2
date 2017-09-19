#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

unsigned int fib(unsigned int a, unsigned int b, unsigned int indeks)
{
    //DO ZADANIA 1.4.8
    if (indeks==0)
    {
        return a;
    }
    else
    {
        unsigned int c;
        c=b;
        b=a+b;
        a=c;
        indeks--;
        fib(a,b,indeks);
    }
}

unsigned int silnia(unsigned int n)
{
    //DO ZADANIA 1.4.13
    if (n==0)   return 1;
    else
    return silnia(n-1)*n;


}

bool czy_pierwsza(unsigned int n)
{
  if(n<2)
    return false; //gdy liczba jest mniejsza ni¿ 2 to nie jest pierwsz¹

  for(int i=2;i*i<=n;i++)
    if(n%i==0)
      return false; //gdy znajdziemy dzielnik, to dana liczba nie jest pierwsza
  return true;
}

bool NWD(unsigned int n,unsigned int m )
{
    do
    {
        if(n>m) n=n-m;
        else m=m-n;
    }
    while(n!=m);
    if (n==1)return true;
    else return false;
}


int main()
{
    //ZADANIE 1.4.1
    //Napisz program wczytuj¹cy ze standardowego wejœcia dwie dodatnie
    //liczby ca³kowite n i m, i wypisuj¹cy w kolejnych wierszach
    //na standardowym wyjœciu wszystkie dodatnie wielokrotnoœci n mniejsze
    //od m.
    /*
    unsigned int n,m,a;
    cout << "WprowadŸ n" << endl;
    cin>>n;
    cout << "WprowadŸ m" << endl;
    cin>>m;

    for(a=n;a<m;a=a+n)
    {
    cout << a<< endl;
    }
    */

    //ZADANIE 1.4.8
    //Napisz program, który wczytuje ze standardowego wejœcia nieujemn¹
    //liczbê ca³kowit¹ n i wypisuje na standardowym wyjœciu element
    //ci¹gu Fibonacciego o indeksie n.
    /*
    //METODA ITERACYJNA
    unsigned int n,a=0,b=1,c=0,indeks=0;
    cout << "WprowadŸ n" << endl;
    cin>>n;
        for(n; n>indeks; indeks++)
    {
        if (indeks!=0)
        {
            c=a+b;
            a=b;
            b=c;
        }
    }


    //METODA REKURENCYJNA
    unsigned int n;
    cout << "WprowadŸ n" << endl;
    cin>>n;
    cout<<fib(0,1,n);
    */

    //ZADANIE 1.4.13
    //Napisz program, który wczytuje ze standardowego wejœcia
    //nieujemn¹ liczbê ca³kowit¹ n i wypisuje na standardowym wyjœciu
    //wartoœæ 0! + 1! + . . . + n!.
    /*
    unsigned int n,i,wynik=0;
    cout << "WprowadŸ n" << endl;
    cin>>n;
    for (n;n>0;n--)
    {
        wynik=wynik+silnia(n);

    }
    cout<<wynik;
    */

    //ZADANIE 1.4.13
    //Napisz program, który wczytuje ze standardowego wejœcia liczbê
    //n i wypisuje na standardowym wyjœciu wszystkie trójki pitagorejskie
    //(tj. trójki liczb ca³kowitych a, b, c takich, ¿e a2 +b2 = c2), sk³adaj¹ce
    //siê z liczb mniejszych od n.
    float a,b,c,liczba;
    int d;
    cout << "WprowadŸ liczbe" << endl;
    cin >>liczba;

    for (a=1;a<=liczba/2;a++)
    {
        for (b=liczba;b>=a;b--)
        {
            c=sqrt(pow(a,2)+pow(b,2));
            d=c;
            if ((a<liczba) &&  (b<liczba) &&  (c<liczba) && (d==c))   cout <<" a= "<<a<<"   b= "<<b<<"   c= "<<c<<endl;
        }
    }

    return 0;
}
