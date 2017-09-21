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
    //Napisz funkcj� dlugosc, kt�ra jako argument otrzymuje napis
    //i zwraca jako warto�� jego d�ugo��. Napisz dwie wersje funkcji dlugosc
    //dla napis�w sk�adaj�cych si� ze znak�w typu char i wchar_t.
    string slowo1;
    wstring slowo2;
    cout << "Podaj slowo" << endl;
    cin >>slowo1;
    wcin >>slowo2;

     cout << "Dlugosc: " <<dlugosc(slowo1)<<"    "<<dlugosc(slowo2) <<endl;

     */

    //ZADANIE 5.2.4
    /*
    // Napisz funkcj�, kt�ra jako argumenty otrzymuje dwa napisy
    //i zwraca warto�� 1, gdy pierwszy napis jest wcze�niejszy w kolejno�ci
    //leksykograficznej i 0 w przeciwnym przypadku.
    //Zak�adamy, �e oba napisy sk�adaj� si� ze znak�w typu char, zawieraj�
    //y��cznie ma�e litery alfabetu �aci�skiego, a system, na kt�rym jest
    //kompilowany i uruchamiany program, u�ywa standardowego kodowania ASCII.
    string slowo1;
    string slowo2;
    cout << "Podaj slowa do porownania" << endl;
    cin >>slowo1;
    cin >>slowo2;
    cout <<pierwszenstwo(slowo1,slowo2)<<endl;
    */


    //ZADANIE 5.2.8
    /*
    //Napisz funkcj�, kt�ra otrzymuje w argumencie napis i podmienia
    //w nim wszystkie ma�e litery na du�e litery.
    //Zak�adamy, �e napis przechowywany jest w tablicy o elementach typu
    //char, sk�ada si� wy��cznie z liter �aci�skich i bia�ych znak�w,
    //oraz �e system ,na kt�rym jest kompilowany i uruchamiany program,
    //u�ywa standardowego kodowania ASCII.
    string slowo1;
    cout << "Podaj slowo" << endl;
    cin >>slowo1;
    transform(slowo1.begin(),slowo1.end(),slowo1.begin(), ::toupper);
    cout <<slowo1<<endl;
    */


    //ZADANIE 5.2.11
    //Napisz funkcj� wytnijzw, kt�ra dostaje jako argument dwa napisy
    //nap1 i nap2, i wycina z napisu nap1 wszystkie znaki wyst�puj�ce
    //tak�e w napisie nap2. Napisz dwie wersje funkcji wytnijz dla napis�w
    //sk�adaj�cych si� ze znak�w typu char i wchar_t.





    return 0;
}
