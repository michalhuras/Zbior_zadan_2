#include <iostream>

using namespace std;

int wartosc_mniejsza (int *a,int *b)
{//funkcja do zadania 3.2.1
if (*a>*b) return *b;
else return *a;
}

void przepisanie(int a,int *w)
{//funkcja do zadania 3.2.6
*w=a;
}

void zamiana(int &ref_a,int &ref_b)
{//funkcja do zadania 3.2.7
    int c=ref_a;
    ref_a=ref_b;
    ref_b=c;
}

int *alokuj(unsigned int n)
{//funkcja do zadania 3.2.11
    return new int[n];
}

double wywolaj(double (*fun)(int arg), int a)
{//funkcja do zadania 3.2.13
    return fun(a);
}

void przepisz1(int const *a,int *b)
{//funkcja do zadania 3.2.15
    *b=*a;
}

void przepisz2(int const *a, int *const b)
{//funkcja do zadania 3.2.16
    *b=*a;
}


int main()
{
    //ZADANIE 3.2.1
    /*
    //Napisz funkcj� otrzymuj�c� jako argumenty wska�niki do dw�ch
    //zmiennych typu int, kt�ra zwraca jako warto�� mniejsz� z liczb wskazywanych
    //przez argumenty.
    int a,b;
    int *aa,*bb;
    cout << "Podaj wartosci dwoch liczb do sprawdzenia" << endl;
    cin >> a;
    aa=&a;
    cin >> b;
    bb=&b;
    cout << "Warto�� mniejsza z nich wynosi:  "<< wartosc_mniejsza(aa,bb)<<endl;
    */

    //ZADANIE 3.2.6
    /*
    //Napisz funkcj�, kt�rej argumentami s� n typu int oraz w wska�nik
    //do int, kt�ra przepisuje warto�� n do zmiennej wskazywanej przez w.
    int a,b;
    int *bb;
    bb=&b;
    cout << "Podaj wartosc liczby do przepisania" << endl;
    cin >> a;
    przepisanie(a,bb);
    cout << "Wartosc przepisana wynosi:  "<< *bb <<endl;
    */

    //ZADANIE 3.2.7
    /*
    //Napisz funkcj� otrzymuj�c� jako argumenty referencje
    //do dw�ch zmiennych typu int, kt�ra zamienia ze sob� warto�ci zmiennych,
    //do kt�rych referencje dostali�my w argumentach.
    int a,b;
    cout << "Podaj wartosci liczb do zmiany" << endl;
    cin >> a;
    cin >> b;
    int &ref_a=a,&ref_b=b;
    cout << "Wartosc bez zmiany: "<<a<<"  "<<b<<endl;
    zamiana(ref_a,ref_b);
    cout << "Wartosc ze zmiana:  "<<a<<"  "<<b<<endl;
    */

    //ZADANIE 3.2.11
    /*
    //Napisz funkcj�, kt�ra dostaje jako argument dodatni� liczb�
    //ca�kowit� n, rezerwuje w pami�ci blok n zmiennych typu int i zwraca
    //jako warto�� wska�nik do pocz�tku zarezerwowanego bloku pami�ci.
    int a;
    cout << "Podaj wielkosc tablicy" << endl;
    cin >>a;
    cout << "wska�nik" << alokuj(a)<<endl;
    */

    //ZADANIE 3.2.13
    /*
    //Napisz funkcj� o dw�ch argumentach:
    //� wska�nik na funkcj� o jednym argumencie typu int zwracaj�c�
    //warto�� typu double,
    //� warto�� typu int,
    //kt�ra zwraca warto�� funkcji otrzymanej w pierwszym argumencie na
    //liczbie ca�kowitej podanej w drugim argumencie.

    //funkcja wywolaj
    */

    //ZADANIE 3.2.15
    /*
    //Napisz funkcj�, kt�ra dostaje dwa argumenty: wska�nik na sta��
    //typu int i wska�nik na zmienn� typu int, i przepisuje zawarto�� sta�ej
    //wskazywanej przez pierwszy argument do zmiennej wskazywanej
    //przez drugi argument.

    //funkcja przepisz1
    */

    //ZADANIE 3.2.16
    /*
    //Napisz funkcj�, kt�ra dostaje dwa argumenty: wska�nik na sta��
    //typu int i sta�y wska�nik na zmienn� typu int. I przepisuje zawarto��
    //sta�ej wskazywanej przez pierwszy argument do zmiennej wskazywanej
    //przez drugi argument.

    //funkcja przepisz2
    */


    return 0;
}
