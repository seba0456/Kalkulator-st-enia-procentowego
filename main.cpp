#include <iostream>
#include <conio.h>
#include <windows.h>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Polish");
    SetConsoleTitleA( "Kalkulator stezenia procentowego by seba0456" );
    double ms;
    double mr;
    double cp;
    string instrukcja;
    string petla;
    cout << "Hello world! V.2.3 ()seba0456" << endl;
    cout << "Witaj w kalkulatorze st�enia procentowego!" << endl;
    cout << "Oto krotka instrukcja." << endl;
    cout << "1.Prosz� by warto�� 'Ms' by�a podawana w gramach." << endl;
    cout << "2.Prosz� by warto�� 'Mr' by�a podawana w gramach." << endl;
    cout << "3.Prosz� by warto�� 'Cp' by�a podawana w procentach." << endl;
    cout << "Dzi�ki tym zabiegom nie muszisz podawa� jednostek." << endl;
    cout << "W wypadku migania programu prosz� go zrestartowa�." << endl;
    cout << "Zaczynamy!" << endl;
    cout << "Czy chcesz uruchomi� program w trybie pentli? (zalecane w wypadku wielu oblicze�) (tak/nie) Uwaga ta funkcja jest eksperymentalna! " << endl;
    cin >> petla;
    if ( petla == "tak" )
    {
        while ( true )
        {
            cout << "Podaj co chcesz obliczy� 'cp', 'ms' 'mr'" << endl;
    cin >> instrukcja;

    if ( instrukcja == "cp" )
    {
        cout << "Podaj warto�� Ms" << endl;
    cin >> ms;
    cout << "Podaj wato�� Mr" << endl;
    cin >> mr;
    cp = ((ms / mr) * 100);
    cout << "Dane:" << endl;
    cout << "Ms= " << ms << endl;
    cout << "Mr= " << mr << endl;
    cout << "Wz�r to (ms:mr)*100" << endl;
    cout << "Cp=" << cp << "%" << endl;
    cout << "Dzi�kuj� za u�ycie narz�dzia" << endl;
    cout << "seba0456" << endl;
    cin.sync();
    cin.get();

    }
    else if ( instrukcja== "ms" )
   {
        cout << "Podaj warto�� Cp" << endl;
    cin >> cp;
    cout << "Podaj wato�� Mr" << endl;
    cin >> mr;
    ms = ((cp * mr) / 100);
    cout << "Dane:" << endl;
    cout << "Cp= " << cp << endl;
    cout << "Mr= " << mr << endl;
    cout << "Wz�r to (Cp*mr):100%" << endl;
    cout << "Ms=" << ms << "gram" << endl;
    cout << "Dzi�kuj� za u�ycie narz�dzia" << endl;
    cout << "seba0456" << endl;
    cin.sync();
    cin.get();

   }
   else if ( instrukcja== "mr" )
   {
        cout << "Podaj warto�� Cp" << endl;
    cin >> cp;
    cout << "Podaj wato�� Ms" << endl;
    cin >> ms;
    mr = ((ms * 100) / cp);
    cout << "Dane:" << endl;
    cout << "Cp= " << cp << endl;
    cout << "Ms= " << ms << endl;
    cout << "Wz�r to (ms*100%):cp%" << endl;
    cout << "Mr=" << mr << "gram" << endl;
    cout << "Dzi�kuj� za u�ycie narzedzia" << endl;
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
        cout << "Podaj warto�� Cp" << endl;
    cin >> cp;
    cout << "Podaj wato�� Mr" << endl;
    cin >> mr;
    ms = ((cp * mr) / 100);
    cout << "Dane:" << endl;
    cout << "Cp= " << cp << endl;
    cout << "Mr= " << mr << endl;
    cout << "Wz�r to (Cp*mr):100%" << endl;
    cout << "Ms=" << ms << "gram" << endl;
    cout << "Dzi�kuj� za u�ycie narz�dzia" << endl;
    cout << "seba0456" << endl;
    cin.sync();
    cin.get();
    return 0;
   }
   else if ( instrukcja== "mr" )
   {
        cout << "Podaj warto�� Cp" << endl;
    cin >> cp;
    cout << "Podaj wato�� Ms" << endl;
    cin >> ms;
    mr = ((ms * 100) / cp);
    cout << "Dane:" << endl;
    cout << "Cp= " << cp << endl;
    cout << "Ms= " << ms << endl;
    cout << "Wz�r to (ms*100%):cp%" << endl;
    cout << "Mr=" << mr << "gram" << endl;
    cout << "Dzi�kuj� za u�ycie narzedzia" << endl;
    cout << "seba0456" << endl;
    cin.sync();
    cin.get();
    return 0;
   }
     }
}
