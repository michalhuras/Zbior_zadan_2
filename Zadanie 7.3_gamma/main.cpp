#include <iostream>
#include <list>
#include <algorithm>
#include <math.h>
//Realizacja z wykorzystaniem biblioteki STL

using namespace std;

class trojkat{
public:
double a,b,c,pole;
trojkat(double xa,double xb,double xc);
trojkat(double xa,double xb,double xc, double xpole);
};

list<int> first(20,100);                                // empty list of ints
list<int> second (4,100);                       // four ints with value 100
list<int> third (second.begin(),second.end());  // iterating through second
list<int> fourth (third);                       // a copy of third
list<int>::iterator it,it1=first.begin();
list<trojkat>figura;
list<trojkat>::iterator it2;

int i=0;

void inicjalizacja()
{
    cout<< "Czy lista jest pusta:  "<<first.empty()<<endl;
    //do wyswietlenia wartosci elementow listy nalezy uzyc iteratora
    cout<< "Lista na której dzia³amy:  "<<endl;
    it = first.begin();
    for (;it!=first.end();it++)
    {
        *it=i;
        i++;
        if (i>10)
            i=i-9;
        cout<<*it<<"   ";
    }
    cout<<endl;
}

void wyswietl(list<int> first)
{
    it = first.begin();
   for (;it!=first.end();it++)
    {
        cout<<*it<<"   ";
    }
    cout<<endl;
}




int main()
{
    inicjalizacja();

    //ZADANIE 7.3.6
    /*
    //Napisz funkcjê znajdz o dwóch argumentach Lista typu
    //element* i a typu int zwracaj¹c¹ wskaŸnik do typu element. Funkcja
    //powinna sprawdzaæ, czy na liœcie reprezentowanej przez zmienn¹
    //Lista znajduje siê element o polu i równym a. Je¿eli tak, to funkcja
    //powinna zwróciæ wskaŸnik do tego elementu. W przeciwnym wypadku
    //funkcja powinna zwróciæ wartoœæ NULL.
    int valToFind;
    cout<< "Podaj wartosc elementu, ktorego bedziemy szukali w liscie:  "<<endl;
    cin >> valToFind;
    it=find(first.begin(), first.end(), valToFind);
    //nie mozna wyswietlic iteratora, trzeba przeksztalcic go na liczbe, dlatego wyswietlamy i
    i=0;
    while (it!=first.begin())
    {
         i++;
         it--;
    }

    cout<< "Element o podanej wartosci znajduje siê na miejscu:  "<< i<<endl;
    */

    //ZADANIE 7.3.7
    /*
    //Napisz funkcjê usun o dwóch argumentach Lista typu element*
    //i a typu int zwracaj¹c¹ wskaŸnik do typu element. Funkcja powinna
    //usuwaæ z listy reprezentowanej przez zmienn¹ Lista element o wartoœci
    //a pola i (o ile taki element znajduje siê na liœcie) oraz zwracaæ
    //wskaŸnik do pierwszego elementu zmodyfikowanej listy (je¿eli po usuniêciu
    //elementu lista bêdzie pusta, to funkcja powinna zwróciæ wartoœæ NULL).
    first.pop_front();
    cout<< "Wyglad listy po usunieciu elementu z przodu: "<<endl;
    wyswietl(first);
    first.pop_back();
    cout<< "Wyglad listy po usunieciu elementu z ty³u : "<<endl;
    wyswietl(first);
    int pozycja;
    cout<< "Podaj pozycje elementu do usuniecia : "<<endl;
    cin>>pozycja;
    it1=first.begin();
    for (int j=0;j!=pozycja;j++)
        it1++;
    first.erase (it1);
    cout<< "Wyglad listy po usunieciu elementu z pozycji : "<<endl;
    wyswietl(first);
    int valToDel;
    cout<< "Podaj wartosc elementow do usuniecia : "<<endl;
    cin>>valToDel;
    first.erase (find(first.begin(), first.end(), valToDel));
    wyswietl(first);
    */

    //ZADANIE 7.3.8
    /*
    //Napisz funkcjê usunw o dwóch argumentach Lista i elem typu
    //element* i zwracaj¹c¹ wskaŸnik do typu element. Funkcja powinna
    //usuwaæ z listy reprezentowanej przez zmienn¹ Lista element wskazywany
    //przez elem oraz zwracaæ wskaŸnik do pierwszego elementu
    //zmodyfikowanej listy (je¿eli po usuniêciu elementu lista bêdzie pusta,
    //to funkcja powinna zwróciæ wartoœæ NULL). Dla elem równego NULL
    //funkcja usunw nie powinna nic robiæ.
    int valToDel;
    cout<< "Podaj wartosc elementow do usuniecia : "<<endl;
    cin>>valToDel;
    while(find(first.begin(), first.end(), valToDel)!=first.end())
    first.erase (find(first.begin(), first.end(), valToDel));
    wyswietl(first);
    */

    //ZADANIE 7.3.11
    /*
    //Napisz funkcjê wyczysc, która dostaje jako argument wskaŸnik
    //do listy wskaŸnikowej z g³ow¹ o elementach typu element i usuwa
    //wszystkie elementy listy (razem z g³ow¹).
    cout<< "Czy lista jest pusta: "<<first.empty()<<endl;
    first.clear();
    wyswietl(first);
    cout<< "Czy lista jest pusta: "<<first.empty()<<endl;
    */

    //ZADANIE 7.3.22
    /*
    //Zdefiniuj strukturê trojkat mog¹c¹ s³u¿yæ jako typ elementów listy
    //jednokierunkowej. Struktura trojkat powinna posiadaæ pola s³u¿¹ce
    //do przechowywania wszystkich boków trójk¹ta oraz jego pola.
    //Napisz funkcjê pole, która otrzymuje w argumencie listê wskaŸnikow¹
    //o elementach typu trojkat i we wszystkich elementach listy do odpowiedniego
    //pola wstawia wartoœæ pola trójk¹ta o bokach, których d³ugoœæ
    //przechowuje dana struktura. Napisz dwie wersje funkcji: dla list
    //z g³ow¹ i dla list bez g³owy.
    figura.push_back(trojkat(1.0,5.0,9.0,1));
    figura.push_back(trojkat(2.0,6.0,93.0,5));
    figura.push_back(trojkat(3.0,7.0,9.0));
    figura.push_back(trojkat(4.0,8.0,9.0));
    it2=figura.begin();
    cout<<"Rozmiar listy:  "<<figura.size()<<endl;
    cout<<"Pierwszy element:  " <<figura.front().a<<"   "<<figura.front().b<<"   "<<figura.front().c<<"   "<<figura.front().pole<<"   "<<endl;
    int num;
    cout<<"Podaj numer elementu, który ma być wyświetlony:  "<<endl;
    cin>>num;
    advance (it2,num-1);
    cout<<"Element numer:  " <<num<<"  a="<<it2->a<<"   b="<<it2->b<<"   c="<<it2->c<<"   Pole wynosi="<<it2->pole<<endl;
*/

    //ZADANIE 7.3.22
    //Napisz funkcję sortującą rosnąco podaną w argumencie listę
    //o elementach typu element. Napisz dwie wersje funkcji: dla list z głową
    //i dla list bez głowy. W wersji dla listy bez głowy funkcja powinna
    //zwracać wskaźnik do pierwszego elementu posortowanej listy.
    first.sort();
    wyswietl(first);
    first.reverse();
    wyswietl(first);


    return 0;
}


trojkat::trojkat( double xa,double xb,double xc)
{
     a=xa;
     b=xb;
     c=xc;
     pole=sqrt(fabs((((xa+xb+xc)/2)*(((xa+xb+xc)/2)-xa)*(((xa+xb+xc)/2)-xb)*(((xa+xb+xc)/2)-xc))));
}

trojkat::trojkat( double xa,double xb,double xc,double xpole)
{
     a=xa;
     b=xb;
     c=xc;
     pole=xpole;
}

