#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

unsigned dlugosc(string slowo)
{  //funkcja do zadania 5.2.2
    int i=0;
    while (slowo[i]!='\0')
    {
        i++;
    }
    return i;
}

unsigned dlugosc(wstring slowo)
{ //funkcja do zadania 5.2.2
    int i=0;
    while (slowo[i]!='\0')
    {
        i++;
   }
    return i;
}

bool pierwszenstwo(string napis1,string napis2)
{   //funkcja do zadania 5.2.4
    if (dlugosc(napis1)<dlugosc(napis2))
    {
        for (int j=0;j<dlugosc(napis1);j++)
        {
            if (napis1[j]<napis2[j]) return true;
            else if (napis1[j]>napis2[j]) return false;
        }
    }
    else
        for (int j=0;j<dlugosc(napis1);j++)
        {
            if (napis1[j]<napis2[j]) return true;
            else if (napis1[j]>napis2[j]) return false;
        }
}

string wytnijz(string nap1,string nap2)
{   //funkcja do zadania 5.2.11
    for (int i=0;i<nap2.length();i++)
    {
        for (int j=0;j<nap1.length();j++)
        {
        if (nap1[j]==nap2[i])
            {
                nap1.erase(j,1);
            }
        }
    }
    return nap1;
}


void pierwszy(string napis)
{   //funkcja do zadania 5.2.18
    int liczba=0;
        for (int i=1;i<napis.length();i++)
        {
            if (napis[liczba]>napis[i]) liczba=i;
        }
        cout<<napis[liczba]<<endl;
}

void uno (int n,string* wsk)
{ //funkcja do zadania 5.2.19
    int naj=0;
    for (int i=1;i<n;i++)
        if (pierwszenstwo(wsk[i],wsk[naj]))   naj=i;



    cout<<wsk[naj]<<endl;
}


void zmiana(string &ref)
{   //funkcja do zadania 5.2.27
    int i=0;
    while (1)
        {
            if (ref[i]>=97 && ref[i]<=122)
            {
                ref[i]=ref[i]-32;
            }
            if (ref[i]==0) break;
            i++;
        }
}



int main()
{
    //ZADANIE 5.2.2
    /*
    //Napisz funkcjê dlugosc, która jako argument otrzymuje napis
    //i zwraca jako wartoœæ jego d³ugoœæ. Napisz dwie wersje funkcji dlugosc
    //dla napisów sk³adaj¹cych siê ze znaków typu char i wchar_t.
    string slowo1;
    wstring slowo2;
    cout << "Podaj slowo" << endl;
    cin >>slowo1;
    wcin >>slowo2;

     cout << "Dlugosc: " <<dlugosc(slowo1)<<"    "<<dlugosc(slowo2) <<endl;

     */

    //ZADANIE 5.2.4
    /*
    // Napisz funkcjê, która jako argumenty otrzymuje dwa napisy
    //i zwraca wartoœæ 1, gdy pierwszy napis jest wczeœniejszy w kolejnoœci
    //leksykograficznej i 0 w przeciwnym przypadku.
    //Zak³adamy, ¿e oba napisy sk³adaj¹ siê ze znaków typu char, zawieraj¹
    //y³¹cznie ma³e litery alfabetu ³aciñskiego, a system, na którym jest
    //kompilowany i uruchamiany program, u¿ywa standardowego kodowania ASCII.
    string slowo1;
    string slowo2;
    cout << "Podaj slowa do porownania" << endl;
    cin >>slowo1;
    cin >>slowo2;
    cout <<pierwszenstwo(slowo1,slowo2)<<endl;
    */


    //ZADANIE 5.2.8
    /*
    //Napisz funkcjê, która otrzymuje w argumencie napis i podmienia
    //w nim wszystkie ma³e litery na du¿e litery.
    //Zak³adamy, ¿e napis przechowywany jest w tablicy o elementach typu
    //char, sk³ada siê wy³¹cznie z liter ³aciñskich i bia³ych znaków,
    //oraz ¿e system ,na którym jest kompilowany i uruchamiany program,
    //u¿ywa standardowego kodowania ASCII.
    string slowo1;
    cout << "Podaj slowo" << endl;
    cin >>slowo1;
    transform(slowo1.begin(),slowo1.end(),slowo1.begin(), ::toupper);
    cout <<slowo1<<endl;
    */


    //ZADANIE 5.2.11
    /*
    //Napisz funkcjê wytnijzw, która dostaje jako argument dwa napisy
    //nap1 i nap2, i wycina z napisu nap1 wszystkie znaki wystêpuj¹ce
    //tak¿e w napisie nap2. Napisz dwie wersje funkcji wytnijz dla napisów
    //sk³adaj¹cych siê ze znaków typu char i wchar_t.
    string nap1,nap2;
    cout << "Podaj napis pierwszy" << endl;
    cin >>nap1;
    cout << "Podaj napis drugi" << endl;
    cin >>nap2;
    nap1=wytnijz(nap1,nap2);
    cout<<endl << nap1 << endl;
    */

    //ZADANIE 5.2.18
    /*
    //Napisz funkcję, która otrzymuje w argumencie tablicę napisów
    //(tablicę tablic a więc typ char** lub wchar_t**) oraz jej rozmiar
    //i zwraca jako wartość pierwszy leksykograficznie spośród przechowywanych
    //w tablicy napisów (funkcja powinna zwrócić kopię znajdującego
    //się w tablicy napisu).
    //Zakładamy, że napisy zawierają wyłącznie małe litery łacińskie. Napisz
    //dwie wersje funkcji: dla napisów składających się ze znaków typu
    // char i wchar_t.
    string napis;
    cout<<"Podaj slowo"<<endl;
    cin>>napis;
    pierwszy(napis);
    */


    //ZADANIE 5.2.19
    /*
    //Napisz funkcję, która otrzymuje w argumencie tablicę napisów
    //(tablicę o elementach typu string lub wstring) oraz jej rozmiar
    //i zwraca jako wartość pierwszy leksykograficznie spośród przechowywanych
    //w tablicy napisów (funkcja powinna zwrócić kopię znajdującego
    //się w tablicy napisu).
    //Zakładamy, że napisy zawierają wyłącznie małe litery łacińskie. Napisz
    //dwie wersje funkcji: dla napisów typu string i wstring.
    int n;
    cout<<"Podaj ilosc slow, ktore bedziemy porownywali"<<endl;
    cin>>n;
    string napis[n];
    cout<<"Podawaj kolejne slowa"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>napis[i];
    }
    string* wsk;
    wsk=&napis[0];
    uno (n,wsk);
    */

    //ZADANIE 5.2.23
    /*
    //Napisz funkcję sklej, która dostaje w argumentach trzy
    //napisy i zwraca jako wartość napis powstały ze sklejenia napisów
    //otrzymanych w argumentach.
    //Napisz dwie wersje funkcji sklej operujące na napisach typu string
    //i typu wstring.
    string slowo1,slowo2,slowo3;
    cout <<"Podaj trzy slowa"<<endl;
    cin >>slowo1;
    cin >>slowo2;
    cin >>slowo3;
    cout<<slowo1+slowo2+slowo3<<endl;
    */

    //ZADANIE 5.2.27
    /*
    //Napisz funkcję, która dostaje w argumencie referencję do napisu
    //i zamienia wszystkie występujące w nim małe litery na odpowiadające
    //im duże litery.
    //Napisz dwie wersje funkcji operujące na napisach typów string
    //i wstring.
    string napis;
    cout <<"Wprowadź napis" <<endl;
    getline(cin,napis);
    string &ref=napis;
    zmiana(ref);
    cout <<"Napis zmieniony na duze" <<endl;
    cout <<ref<<endl;
    */


    return 0;
}
