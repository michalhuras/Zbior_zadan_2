#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

struct trojkat{//funkcja do zadania 7.2.1
int a;
int b;
int c;
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

int main()
{
    // ZADANIE 7.2.1
    /*
    //Zdefiniuj struktur� trojkat przechowuj�c� d�ugo�ci bok�w
    //tr�jk�ta. Napisz funkcj�, kt�ra otrzymuje jako argument zmienn� typu
    //struct trojkat, i zwraca jako warto�� obw�d tr�jk�ta przekazanego
    //w argumencie.
    trojkat fig_1;
    cout << "Poda dlugosci bokow trojkata" << endl;
    cin>>fig_1.a>>fig_1.b>>fig_1.c;
    cout <<"Obwod tego trojkata wynosi: "<<obwod(fig_1);
    */

    // ZADANIE 7.2.2
    /*
    //Napisz funkcj�, kt�ra otrzymuje jako argumenty zmienn� troj1
    //typu struct trojkat zdefiniowanego w zadaniu 7.2.1 oraz zmienn�
    //troj2 wska�nik na zmienn� typu struct trojkat, i przepisuje zawarto��
    //zmiennej troj1 do zmiennej wskazywanej przez troj2.
    trojkat troj1,troj2;
    trojkat* wsk=&troj2;
    troj1=losuj(troj1);
    przepisz(troj1,wsk);
    wyswietl(troj1);
    cout <<endl;
    wyswietl(wsk);
    */

    // ZADANIE 7.2.2
    //Zdefiniuj struktur� punkt s�u��c� do przechowywania wsp�rz�dnych
    //punkt�w w tr�jwymiarowej przestrzeni kartezja�skiej.
    //Napisz funkcj�, kt�ra otrzymuje jako argumenty tablic� tab o argumentach
    //typu struct punkt oraz jej rozmiar, i zwraca jako warto��
    //najmniejsz� spo�r�d odleg�o�ci pomi�dzy punktami przechowywanymi
    //w tablicy tab. Zak�adamy, �e otrzymana w argumencie tablica
    //ma co najmniej dwa argumenty.





    return 0;
}
