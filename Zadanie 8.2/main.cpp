#include <iostream>
#include <fstream> //biblioteka odpowiedzialna za prace z plikami
#include <cstdlib> //biblioteka dla exit(0);
#include <stdlib.h>
#include <stdio.h>
using namespace std;

fstream *otworz(char* plik)
{ //funkcja do zadania 8.2.1
    return new fstream(plik,ios::in);
    //to samo co plik.open("wizytowka.txt",ios::in);, tylko zwraca wskaźnik
}

void wypisz(fstream &plik)
{//funkcja do zadania 8.2.2
    char c;
    while (!plik.eof())
    {
        plik.get(c);
        if(!plik.eof())
            cout<<c;
    }
    plik.close();
}

void wyswietl(fstream &plik)
{//funkcja do zadania 8.2.2
//rozwiazanie z wykorzystaniem komend z kursu Zelenta odcinek 7.
    string linia;
    unsigned licznik;
    while (getline(plik,linia))
        {
        cout<<linia<<endl;
        licznik++;
        }
    plik.close();
}

void wypisz(char * sciezka)
{//funkcja do zadania 8.2.3
    fstream plik(sciezka, ios::in);
    char c;
    while(!plik.eof())
    {
        plik>>c;
        if (!plik.eof())
            cout<<c<<"  ";
    }
    plik.close();
}

void wypisz2(char * sciezka)
{//funkcja do zadania  8.2.3
    wfstream plik(sciezka, ios::in);
    wchar_t c;
    while(!plik.eof())
    {
        plik>>c;
        if (!plik.eof())
            wcout<<c;
    }
    plik.close();
}

void znak(char * sciezka,char b)
{//funkcja do zadania 8.2.4
    unsigned ilosc=0;
    wfstream plik(sciezka, ios::in);
    wchar_t c;
    while(!plik.eof())
    {
        plik.get(c);
        if (c==b)
            ilosc++;
        if (!plik.eof())
            wcout<<c;

    }
    cout<<endl<<"Znak "<<b<<"  wystapil  "<<ilosc<<"  razy";
    plik.close();
}

void statystyki(char * sciezka)
{//funkcja do zadania 8.2.5
    fstream plik(sciezka, ios::in);
    string napis="",pom;
    unsigned dlugosc=0;
    char c;
    while(!plik.eof())
    {
        plik.get(c);
        pom=char(c);
        napis.insert(dlugosc,pom);
        dlugosc++;
    }
    cout<<napis<<endl<<dlugosc<<endl<<endl;

    int tab[dlugosc][2];
    for(unsigned s=0;s<dlugosc;s++)
    {
        tab[s][0]=0;
    }

    unsigned licznik=0;
    cout<<licznik;
    for(unsigned i=0;i<dlugosc;i++)
    {
        for (int j=0;j<=i;j++)
        {

            if (j==i)
            {
                tab[licznik][1]=j;
                tab[licznik][0]++;
                licznik++;
                cout<<licznik;
                break;
            }
            if ((napis[i]==napis[tab[j][1]]) && (j!=i))
            {
              tab[j][0]=tab[j][0]+1;
            }
        }
    }
    cout<<licznik;
    for(int k=0;k<licznik;k++)
    {
    cout<<"znak "<<napis[tab[k][1]]<<"  wystapil razy:"<<tab[k][0]<<endl;
    }
}


void suma(char * sciezka)
{//funkcja do zadania 8.2.7
    fstream plik(sciezka, ios::in);
    int sumaa=0,a;
    string c;
    while(!plik.eof())
    {
        plik>>c;
        if (!plik.eof())
            {
            cout<<c<<endl;
            a=atoi(c.c_str());
            sumaa=sumaa+a;
            }
    }
    cout<<endl<<sumaa;
    plik.close();
}

bool porownajZawartosc(char * sciezka1,char * sciezka2)
{//funkcja do zadania 8.2.9
    fstream plik1(sciezka1, ios::in);
    fstream plik2(sciezka2, ios::in);
    string znak1,znak2;
    while(!plik1.eof()&& !plik2.eof())
    {
        plik1>>znak1;
        plik2>>znak2;
        if (!plik1.eof()&& !plik2.eof())
            {
            cout<<"Porownanie znakow:"<<endl;
            cout<<znak1<<"   "<<znak2;
            if (znak1!=znak2)
                return false;
            }
          cout<<endl;
    }
    cout<<endl;
    return true;
    plik1.close();
    plik2.close();
}

bool porownajZawartoscZbialymiznakami(char * sciezka1,char * sciezka2)
{//funkcja do zadania 8.2.10
    fstream plik1(sciezka1, ios::in);
    fstream plik2(sciezka2, ios::in);
    string znak1,znak2;
    while(!plik1.eof()&& !plik2.eof())
    {
        getline(plik1,znak1);
        getline(plik2,znak2);
            cout<<"Porownanie lini:"<<endl;
            cout<<znak1<<"   "<<znak2;
            if (znak1!=znak2)
                return false;
          cout<<endl;
    }
    cout<<endl;
    return true;
    plik1.close();
    plik2.close();
}

fstream *  wskaznikDoNadpisaniaPlikutekstowego (char * plik )
{//funkcja do zadania 8.2.11
return new fstream ( plik , ios::out | ios::app |ios::in) ;
}

void zapisWersowDopliku(fstream* plik1,int iloscWersow)
{//funkcja do zadania 8.2.12
    string liniaTekstu;
    cin.sync();
    for(int i=0;i<iloscWersow;i++)
    {
    getline(cin,liniaTekstu);
    *plik1<<liniaTekstu<<endl;
    }
    plik1->close();
}

void przepiszZawartosc(fstream* plik1,fstream* plik2)
{//funkcja do zadania 8.2.13
    string liniaTekstu;
    while(!plik1->eof())
    {
        getline(*plik1,liniaTekstu);
        *plik2<<liniaTekstu<<endl;
    }
    plik1->close();
    plik2->close();
}

void przepiszZawartoscBinarnie(char* sciezka1,char* sciezka2)
{//funkcja do zadania 8.2.14
    fstream * plik1=new fstream ( sciezka1 , ios::in  | ios::binary);
    fstream * plik2=new fstream ( sciezka2 , ios::out | ios::binary) ;
    char  c[100];
    int n=100;
    while(n==100)
    {
    plik1->read(c,100) ;
    n=plik1->gcount() ;
    plik2->write(c,n);
    cout<<"kupa";
    }

}


int main()
{
    //ZADANIE 8.2.1
    /*
    //Napisz funkcję, która dostaje jako argument ścieżkę dostępu
    //do pliku, otwiera plik do tekstowego czytania i zwraca jako wartość
    //deskryptor świeżo otwartego pliku (w wersji dla języka C++ funkcja
    //powinna zwrócić wskaźnik do obiektu klasy fstream).
    char* plik="Wizytowka.txt";
    fstream *wsk=otworz(plik);
    */

    //ZADANIE 8.2.2
    /*
    //Napisz funkcję, która dostaje jako argument deskryptor do pliku
    //tekstowego otwartego do czytania (w wersji dla języka C++ referencję
    //do obiektu klasy fstream), wypisuje zawartość pliku na standardowe
    //wyjście i zamyka plik.
    char* plik="wizytowka.txt";
    fstream *wsk=otworz(plik);
    //wsk-wskaznik do obiektu klasy fstream
    fstream &refe=*wsk; //refe-referencja do obiektu klasy fstream
    wyswietl(refe);
    //wypisz(refe);
    */


    //ZADANIE 8.2.3
    /*
    //Napisz funkcję, która dostaje jako argument ścieżkę dostępu
    //do pliku tekstowego i wypisuje na standardowym wyjściu zawartość
    //pliku z pominięciem białych znaków.
    //Napisz dwie wersje funkcji dla znaków typów char i wchar_t.
    char* plik="wizytowka.txt";
    wypisz(plik);
    */


    //ZADANIE 8.2.4
    /*
    //Napisz funkcję, która dostaje jako argumenty ścieżkę dostępu
    //do pliku tekstowego oraz znak c i zwraca jako wartość liczbę wystąpień
    //znaku c w podanym w argumencie pliku.
    //Napisz dwie wersje funkcji dla znaków typów char i wchar_t.
    char* plik="wizytowka.txt";
    char c='a';
    znak(plik,c);
    */

    //ZADANIE 8.2.5
    /*
    //Napisz funkcję, która dostaje w argumencie ścieżkę dostępu do pliku
    //tekstowego i wypisuje na standardowym wyjściu statystyki występowania
    //w pliku poszczególnych znaków (zakładamy, że znaki są typu
    //char).
    char* plik="wizytowka.txt";
    statystyki(plik);
    */

    //ZADANIE 8.2.7
    /*
    //Napisz funkcję, która dostaje jako argument ścieżkę dostępu do pliku
    //tekstowego zawierającego liczby całkowite oddzielone białymi znakami
    //i zwraca jako wartość sumę znajdujących się w pliku liczb.
    char* plik="suma.txt";
    suma(plik);
    */

    //ZADANIE 8.2.9
    /*
    //Napisz funkcję, która dostaje jako argumenty ścieżki dostępu
    //do dwóch plików tekstowych i zwraca jako wartość 1, jeżeli podane
    //pliki mają taką samą zawartość oraz 0 w przeciwnym wypadku.
    //Napisz dwie wersje funkcji dla znaków typu char i wchar_t.
    char* sciezka1="porownanie1.txt";
    char* sciezka2="porownanie2.txt";
    char* sciezka3="porownanie3.txt";
    if(porownajZawartosc(sciezka1,sciezka3)) cout <<"Pliki sa takie same"<<endl;
    else cout<<endl<<"Pliki sie roznia"<<endl;
    */

    //ZADANIE 8.2.10
    /*
    //Napisz funkcję, która dostaje jako argumenty ścieżki dostępu
    //do dwóch plików tekstowych i zwraca jako wartość 1, jeżeli podane
    //pliki mają taką samą zawartość z dokładnością do białych znaków
    //oraz 0 w przeciwnym wypadku.
    //Napisz dwie wersje funkcji dla znaków typu char i wchar_t.
    char* sciezka1="porownanie1.txt";
    char* sciezka2="porownanie2.txt";
    char* sciezka3="porownanie3.txt";
    if(porownajZawartoscZbialymiznakami(sciezka1,sciezka2)) cout <<"Pliki sa takie same"<<endl;
    else cout<<endl<<"Pliki sie roznia"<<endl;
    */


    //ZADANIE 8.2.11
    /*
    //Napisz funkcję, która dostaje jako argument ścieżkę dostępu do pliku,
    //otwiera plik do tekstowego pisania z kursorem ustawionym na końcu
    //pliku i zwraca jako wartość deskryptor świeżo otwartego pliku
    //(w wersji dla języka C++ funkcja powinna zwrócić wskaźnik do obiektu
    //klasy fstream).
    char* sciezka1="nadpisywaniePliku.txt";
    fstream * plik1=wskaznikDoNadpisaniaPlikutekstowego(sciezka1);
    cout<<plik1<<endl;
    */

    //ZADANIE 8.2.12
    /*
    //Napisz funkcję, która dostaje jako argument deskryptor do pliku
    //tekstowego otwartego do pisania (w wersji dla języka C++ referencję
    //do obiektu klasy fstream) oraz liczbę n, wczytuje ze standardowego
    //wejścia n wersów tekstu, zapisuje do pliku wczytany tekst i zamyka
    //plik.Napisz dwie wersje funkcji dla znaków typów char i wchar_t.
    char* sciezka1="nadpisywaniePliku.txt";
    fstream * plik1=wskaznikDoNadpisaniaPlikutekstowego(sciezka1);
    int iloscWersow;
    cout<<"Podaj ile wersow ma zostac zapisanych do pliku:  ";
    cin>>iloscWersow;
    zapisWersowDopliku(plik1,iloscWersow);
    */

    //ZADANIE 8.2.13
    /*
    //Napisz funkcję, która dostaje jako argumenty deskryptory dwóch
    //plików tekstowych i przepisuje zawartość pierwszego pliku do drugiego
    //pliku.
    char* sciezka1="zadanie8.2.13.A.txt";
    char* sciezka2="zadanie8.2.13.B.txt";
    fstream * plik1=new fstream ( sciezka1 , ios::in);
    fstream * plik2=new fstream ( sciezka2 , ios::out | ios::app) ;
    przepiszZawartosc(plik1,plik2);
    */

    //ZADANIE 8.2.14

    //Napisz funkcję, która dostaje jako argumenty ścieżki dostępu
    //do dwóch plików (w wersji dla języka C++ referencje do obiektów
    //klasy fstream) i przepisuje zawartość pierwszego pliku do drugiego
    //pliku (stara zawartość drugiego pliku ma zostać skasowana).
    char* sciezka1="zadanie8.2.13.A.txt";
    char* sciezka2="zadanie8.2.13.B.txt";
    //fstream * plik1=new fstream ( sciezka1 , ios::in);
    //fstream * plik2=new fstream ( sciezka2 , ios::out) ;
    //przepiszZawartosc(plik1,plik2);
    //wersja binarna
    przepiszZawartoscBinarnie(sciezka1,sciezka2);

    //ZADANIE 8.2.15


    return 0;
}
