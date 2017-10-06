#include <iostream>
#include <fstream> //biblioteka odpowiedzialna za prace z plikami
#include <cstdlib> //biblioteka dla exit(0);
#include <stdlib.h>
#include <stdio.h>
using namespace std;

fstream *otworz(char* plik)
{ //funkcja do zadania 8.2.1
    return new fstream(plik,ios::in);
    //to samo co plik.open("wizytowka.txt",ios::in);, tylko zwraca wskaünik
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
            cout<<c;
    }
    plik.close();
}

void wypisz2(char * sciezka)
{//funkcja do zadania 8.2.3
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
    for(int s=0;s<dlugosc;s++)
    {
        tab[s][0]=0;
    }

    unsigned licznik=0;
    cout<<licznik;
    for(int i=0;i<dlugosc;i++)
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
        cout<<c<<endl;
        a=atoi(c.c_str());
        cout<<a<<endl;
        //if (!plik.eof())
            //sumaa=suma+a;

    }
    cout<<endl<<sumaa;
    plik.close();
}


int main()
{
    //ZADANIE 8.2.1
    /*
    //Napisz funkcjÍ, ktÛra dostaje jako argument úcieøkÍ dostÍpu
    //do pliku, otwiera plik do tekstowego czytania i zwraca jako wartoúÊ
    //deskryptor úwieøo otwartego pliku (w wersji dla jÍzyka C++ funkcja
    //powinna zwrÛciÊ wskaünik do obiektu klasy fstream).
    char* plik="Wizytowka.txt";
    fstream *wsk=otworz(plik);
    */

    //ZADANIE 8.2.2
    /*
    //Napisz funkcjÍ, ktÛra dostaje jako argument deskryptor do pliku
    //tekstowego otwartego do czytania (w wersji dla jÍzyka C++ referencjÍ
    //do obiektu klasy fstream), wypisuje zawartoúÊ pliku na standardowe
    //wyjúcie i zamyka plik.
    char* plik="wizytowka.txt";
    fstream *wsk=otworz(plik);
    //wsk-wskaznik do obiektu klasy fstream
    fstream &refe=*wsk; //refe-referencja do obiektu klasy fstream
    wyswietl(refe);
    //wypisz(refe);
    */


    //ZADANIE 8.2.3
    /*
    //Napisz funkcjÍ, ktÛra dostaje jako argument úcieøkÍ dostÍpu
    //do pliku tekstowego i wypisuje na standardowym wyjúciu zawartoúÊ
    //pliku z pominiÍciem bia≥ych znakÛw.
    //Napisz dwie wersje funkcji dla znakÛw typÛw char i wchar_t.
    char* plik="wizytowka.txt";
    wypisz(plik);
    */

    //ZADANIE 8.2.4
    /*
    //Napisz funkcjÍ, ktÛra dostaje jako argumenty úcieøkÍ dostÍpu
    //do pliku tekstowego oraz znak c i zwraca jako wartoúÊ liczbÍ wystπpieÒ
    //znaku c w podanym w argumencie pliku.
    //Napisz dwie wersje funkcji dla znakÛw typÛw char i wchar_t.
    char* plik="wizytowka.txt";
    char c='a';
    znak(plik,c);
    */

    //ZADANIE 8.2.5
    /*
    //Napisz funkcjÍ, ktÛra dostaje w argumencie úcieøkÍ dostÍpu do pliku
    //tekstowego i wypisuje na standardowym wyjúciu statystyki wystÍpowania
    //w pliku poszczegÛlnych znakÛw (zak≥adamy, øe znaki sπ typu
    //char).
    char* plik="wizytowka.txt";
    statystyki(plik);
    */

    //ZADANIE 8.2.6
    //Napisz funkcjÍ, ktÛra dostaje jako argument úcieøkÍ dostÍpu do pliku
    //tekstowego zawierajπcego liczby ca≥kowite oddzielone bia≥ymi znakami
    //i zwraca jako wartoúÊ sumÍ znajdujπcych siÍ w pliku liczb.
    char* plik="suma.txt";
    suma(plik);




    return 0;
}
