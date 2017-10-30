#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

struct element{
//struktura wykorzystywana w celu implementacji jednokierunkowej listy wskaŸnikowej
int i;
element* next;
};

element* utworz()
{ //funkcja do zadania 7.3.1
    element *wsk=NULL;
    return wsk;
}

void losuj(element* wsk)
{ //funkcja do zadania 7.3.2
    element* wsk2=wsk;
    while (wsk!=NULL)
        {
        wsk=wsk->next;
        }
    wsk=new element;
    wsk->i=rand()%10+1;
    wsk->next=NULL;
    /*
    element n;
    n.i=rand()%10+1;
    n.next=
    wsk=&n;
    */
}

void wyswietl(element *wsk)
{ //funkcja do zadania 7.3.2
    int a=wsk->i;
    cout<<endl<<a<<"  "<<"  "<<wsk;
   // if (wsk!=NULL)
    //wyswietl(wsk->next);

}



void wyczysc(element *wsk)
{ //funkcja do zadania 7.3.2

}


int main()
{
    element *wsk=utworz();
    losuj(wsk);
    losuj(wsk);
    losuj(wsk);
    losuj(wsk);
    losuj(wsk);
//wyswietl(wsk);
    return 0;
}
