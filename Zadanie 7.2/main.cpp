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

    // ZADANIE 7.2.2
    //Zdefiniuj strukturê punkt s³u¿¹c¹ do przechowywania wspó³rzêdnych
    //punktów w trójwymiarowej przestrzeni kartezjañskiej.
    //Napisz funkcjê, która otrzymuje jako argumenty tablicê tab o argumentach
    //typu struct punkt oraz jej rozmiar, i zwraca jako wartoœæ
    //najmniejsz¹ spoœród odleg³oœci pomiêdzy punktami przechowywanymi
    //w tablicy tab. Zak³adamy, ¿e otrzymana w argumencie tablica
    //ma co najmniej dwa argumenty.





    return 0;
}
