#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

struct element{
//struktura wykorzystywana w celu implementacji jednokierunkowej listy wska�nikowej
int i;
element* next;
};

element* utworz()
{ //funkcja do zadania 7.3.1
    element a;
    element *wsk=&a;
    wsk->next=0;
    wsk->i=rand()%10+1;
    return wsk;
}

void losuj(element* wsk)
{ //funkcja do zadania 7.3.2
    element* wsk2;
    while (wsk->next!=0)
        {
        wsk2=wsk;
        wsk=wsk2->next;
        }
    element n;
    n.i=rand()%10+1;
    n.next=NULL;
    wsk->next=&n;
}

void wyswietl(element *wsk)
{ //funkcja do zadania 7.3.2
    int a=wsk->i;
    cout<<endl<<a<<"  "<<"  "<<wsk->next;
    if (wsk->next!=NULL)
    wyswietl(wsk->next);

}



void wyczysc(element *wsk)
{ //funkcja do zadania 7.3.2

}


int main()
{
    srand(time(NULL));
    //ZADANIE 7.3.1
    /*
    //Napisz funkcj� utworz zwracaj�c� wska�nik do pustej listy bez g�owy
    //o elementach typu element.
    element *wsk;
    wsk=utworz();
    wsk->next=NULL;
    cout << wsk->i << "   " <<wsk->next<<endl;
    */

    //ZADANIE 7.3.2
    //Napisz funkcj� wyczysc, kt�ra dostaje jako argument wska�nik
    //do pierwszego elementu listy wska�nikowej bezg�owy o elementach typu
    //element i usuwa wszystkie elementy listy.
    element *wsk=utworz();
    losuj(wsk);
losuj(wsk);

   //wyswietl(wsk);




    return 0;
}
