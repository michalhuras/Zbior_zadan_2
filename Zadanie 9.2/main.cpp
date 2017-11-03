#include <iostream>
#define suma(a,b,c) a+b+c
//#define wiekszy(a,b)\
//if ( a>b ) cout<<a<<endl; else cout<<b<<endl;
//#define parzystosc(a) ( a%2==0) ? 1 : 0
//#define najwieksza(a,b,c) if((a>=b)&&(a>=c)) \
//cout<<a<<endl; elseif(b>=c) cout<<b<<endl; \
//else cout<<c<<endl
#define zeruj(x) x=0


using namespace std;
//https://4programmers.net/C/Preprocesor



int main()
{

    //ZADANIE 9.2.1
    //Napisz makro, które dostaje trzy argumenty i zwraca ich sumê.
    cout<<suma(2,3,4)<<endl;

    //ZADANIE 9.2.3 -nie dzia³¹
    //Napisz makro, które dostaje jako argumenty dwie liczby ca³kowite
    //i wypisuje na standardowym wyjœciu wiêksz¹ z nich.
    //cout << wiekszy(4,324);

    //ZADANIE 9.2.4 -nie dzia³¹
    //Napisz jednoargumentowe makro, które zwraca wartoœæ 1 je¿eli
    //argumentem jest liczba parzysta i 0 je¿eli argument jest nieparzysty.
    //cout<<  parzystosc(23424)<<endl;

    //ZADANIE 9.2.6 -nie dzia³¹
    //Napisz makro, które dostaje trzy liczby ca³kowite jako argumenty
    //i wypisuje na standardowym wyjœciu najwiêksz¹ z otrzymanych
    //wartoœci.
    //cout << najwieksza(4,5,1);

    //ZADANIE 9.2.10 - nie dzia³¹
    //Napisz makro, które nadaje wartoœæ 0 podanej w argumencie
    //zmiennej.
    int x=5;
    cout<<x<<endl;
    zeruj(x);
    cout<<x<<endl;





    return 0;
}
