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
    //Napisz funkcjê wytnijzw, która dostaje jako argument dwa napisy
    //nap1 i nap2, i wycina z napisu nap1 wszystkie znaki wystêpuj¹ce
    //tak¿e w napisie nap2. Napisz dwie wersje funkcji wytnijz dla napisów
    //sk³adaj¹cych siê ze znaków typu char i wchar_t.





    return 0;
}
