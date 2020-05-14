#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    double ms;
    double mr;
    double cp;
    string instrukcja;
    string petla;
    cout << "Hello world! V.1.0 ()seba0456" << endl;
    cout << "Witaj w kalkulatorze stezenia procentowego!" << endl;
    cout << "Oto krotka instrukcja." << endl;
    cout << "1.Prosze by wartosc 'Ms' byla podawana w kilogramach" << endl;
    cout << "2.Prosze by wartosc 'Mr' byla podawana w kilogramach" << endl;
    cout << "Dzieki tym zabiegom nie muszisz podawac jednostek" << endl;
    cout << "Zaczynamy!" << endl;
    cout << "Czy chcesz uruchomic program w trybie pentli? (zalecane w wypadku wielu obliczen) (y/n) eksperymentalne " << endl;
    cin >> petla;
    if ( petla == "y" )
    {
        while ( true )
        {
            cout << "Podaj co chcesz obliczyc 'cp', 'ms' 'mr'" << endl;
    cin >> instrukcja;

    if ( instrukcja == "cp" )
    {
        cout << "Podaj wartosc Ms" << endl;
    cin >> ms;
    cout << "Podaj watosc Mr" << endl;
    cin >> mr;
    cp = ((ms / mr) * 100);
    cout << "Dane:" << endl;
    cout << "Ms= " << ms << endl;
    cout << "Mr= " << mr << endl;
    cout << "Wzor to (ms:mr)*100" << endl;
    cout << "Cp=" << cp << "%" << endl;
    cout << "Dziekuje za uzycie narzedzia" << endl;
    cout << "seba0456" << endl;
    cin.sync();
    cin.get();

    }
    else if ( instrukcja== "ms" )
   {
        cout << "Podaj wartosc Cp" << endl;
    cin >> cp;
    cout << "Podaj watosc Mr" << endl;
    cin >> mr;
    ms = ((cp * mr) / 100);
    cout << "Dane:" << endl;
    cout << "Cp= " << cp << endl;
    cout << "Mr= " << mr << endl;
    cout << "Wzor to (Cp*mr):100%" << endl;
    cout << "Ms=" << ms << "kg" << endl;
    cout << "Dziekuje za uzycie narzedzia" << endl;
    cout << "seba0456" << endl;
    cin.sync();
    cin.get();

   }
   else if ( instrukcja== "mr" )
   {
        cout << "Podaj wartosc Cp" << endl;
    cin >> cp;
    cout << "Podaj watosc Ms" << endl;
    cin >> ms;
    mr = ((ms * 100) / cp);
    cout << "Dane:" << endl;
    cout << "Cp= " << cp << endl;
    cout << "Ms= " << ms << endl;
    cout << "Wzor to (ms*100%):cp%" << endl;
    cout << "Mr=" << mr << "kg" << endl;
    cout << "Dziekuje za uzycie narzedzia" << endl;
    cout << "seba0456" << endl;
    cin.sync();
    cin.get();

   }
        }
    }
     else
     {
         cout << "Podaj co chcesz obliczyc 'cp', 'ms' 'mr'" << endl;
    cin >> instrukcja;

    if ( instrukcja == "cp" )
    {
        cout << "Podaj wartosc Ms" << endl;
    cin >> ms;
    cout << "Podaj watosc Mr" << endl;
    cin >> mr;
    cp = ((ms / mr) * 100);
    cout << "Dane:" << endl;
    cout << "Ms= " << ms << endl;
    cout << "Mr= " << mr << endl;
    cout << "Wzor to (ms:mr)*100" << endl;
    cout << "Cp=" << cp << "%" << endl;
    cout << "Dziekuje za uzycie narzedzia" << endl;
    cout << "seba0456" << endl;
    cin.sync();
    cin.get();
    return 0;
    }
    else if ( instrukcja== "ms" )
   {
        cout << "Podaj wartosc Cp" << endl;
    cin >> cp;
    cout << "Podaj watosc Mr" << endl;
    cin >> mr;
    ms = ((cp * mr) / 100);
    cout << "Dane:" << endl;
    cout << "Cp= " << cp << endl;
    cout << "Mr= " << mr << endl;
    cout << "Wzor to (Cp*mr):100%" << endl;
    cout << "Ms=" << ms << "kg" << endl;
    cout << "Dziekuje za uzycie narzedzia" << endl;
    cout << "seba0456" << endl;
    cin.sync();
    cin.get();
    return 0;
   }
   else if ( instrukcja== "mr" )
   {
        cout << "Podaj wartosc Cp" << endl;
    cin >> cp;
    cout << "Podaj watosc Ms" << endl;
    cin >> ms;
    mr = ((ms * 100) / cp);
    cout << "Dane:" << endl;
    cout << "Cp= " << cp << endl;
    cout << "Ms= " << ms << endl;
    cout << "Wzor to (ms*100%):cp%" << endl;
    cout << "Mr=" << mr << "kg" << endl;
    cout << "Dziekuje za uzycie narzedzia" << endl;
    cout << "seba0456" << endl;
    cin.sync();
    cin.get();
    return 0;
   }
     }
}
