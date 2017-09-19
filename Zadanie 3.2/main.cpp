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
    //Napisz funkcjê otrzymuj¹c¹ jako argumenty wskaŸniki do dwóch
    //zmiennych typu int, która zwraca jako wartoœæ mniejsz¹ z liczb wskazywanych
    //przez argumenty.
    int a,b;
    int *aa,*bb;
    cout << "Podaj wartosci dwoch liczb do sprawdzenia" << endl;
    cin >> a;
    aa=&a;
    cin >> b;
    bb=&b;
    cout << "Wartoœæ mniejsza z nich wynosi:  "<< wartosc_mniejsza(aa,bb)<<endl;
    */

    //ZADANIE 3.2.6
    /*
    //Napisz funkcjê, której argumentami s¹ n typu int oraz w wskaŸnik
    //do int, która przepisuje wartoœæ n do zmiennej wskazywanej przez w.
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
    //Napisz funkcjê otrzymuj¹c¹ jako argumenty referencje
    //do dwóch zmiennych typu int, która zamienia ze sob¹ wartoœci zmiennych,
    //do których referencje dostaliœmy w argumentach.
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
    //Napisz funkcjê, która dostaje jako argument dodatni¹ liczbê
    //ca³kowit¹ n, rezerwuje w pamiêci blok n zmiennych typu int i zwraca
    //jako wartoœæ wskaŸnik do pocz¹tku zarezerwowanego bloku pamiêci.
    int a;
    cout << "Podaj wielkosc tablicy" << endl;
    cin >>a;
    cout << "wskaŸnik" << alokuj(a)<<endl;
    */

    //ZADANIE 3.2.13
    /*
    //Napisz funkcjê o dwóch argumentach:
    //— wskaŸnik na funkcjê o jednym argumencie typu int zwracaj¹c¹
    //wartoœæ typu double,
    //— wartoœæ typu int,
    //która zwraca wartoœæ funkcji otrzymanej w pierwszym argumencie na
    //liczbie ca³kowitej podanej w drugim argumencie.

    //funkcja wywolaj
    */

    //ZADANIE 3.2.15
    /*
    //Napisz funkcjê, która dostaje dwa argumenty: wskaŸnik na sta³¹
    //typu int i wskaŸnik na zmienn¹ typu int, i przepisuje zawartoœæ sta³ej
    //wskazywanej przez pierwszy argument do zmiennej wskazywanej
    //przez drugi argument.

    //funkcja przepisz1
    */

    //ZADANIE 3.2.16
    /*
    //Napisz funkcjê, która dostaje dwa argumenty: wskaŸnik na sta³¹
    //typu int i sta³y wskaŸnik na zmienn¹ typu int. I przepisuje zawartoœæ
    //sta³ej wskazywanej przez pierwszy argument do zmiennej wskazywanej
    //przez drugi argument.

    //funkcja przepisz2
    */


    return 0;
}
