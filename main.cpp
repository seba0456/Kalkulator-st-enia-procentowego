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
    cout << "Witaj w kalkulatorze stê¿enia procentowego!" << endl;
    cout << "Oto krotka instrukcja." << endl;
    cout << "1.Proszê by wartoœæ 'Ms' by³a podawana w gramach." << endl;
    cout << "2.Proszê by wartoœæ 'Mr' by³a podawana w gramach." << endl;
    cout << "3.Proszê by wartoœæ 'Cp' by³a podawana w procentach." << endl;
    cout << "Dziêki tym zabiegom nie muszisz podawaæ jednostek." << endl;
    cout << "W wypadku migania programu proszê go zrestartowaæ." << endl;
    cout << "Zaczynamy!" << endl;
    cout << "Czy chcesz uruchomiæ program w trybie pentli? (zalecane w wypadku wielu obliczeñ) (tak/nie) Uwaga ta funkcja jest eksperymentalna! " << endl;
    cin >> petla;
    if ( petla == "tak" )
    {
        while ( true )
        {
            cout << "Podaj co chcesz obliczyæ 'cp', 'ms' 'mr'" << endl;
    cin >> instrukcja;

    if ( instrukcja == "cp" )
    {
        cout << "Podaj wartoœæ Ms" << endl;
    cin >> ms;
    cout << "Podaj watoœæ Mr" << endl;
    cin >> mr;
    cp = ((ms / mr) * 100);
    cout << "Dane:" << endl;
    cout << "Ms= " << ms << endl;
    cout << "Mr= " << mr << endl;
    cout << "Wzór to (ms:mr)*100" << endl;
    cout << "Cp=" << cp << "%" << endl;
    cout << "Dziêkujê za u¿ycie narzêdzia" << endl;
    cout << "seba0456" << endl;
    cin.sync();
    cin.get();

    }
    else if ( instrukcja== "ms" )
   {
        cout << "Podaj wartoœæ Cp" << endl;
    cin >> cp;
    cout << "Podaj watoœæ Mr" << endl;
    cin >> mr;
    ms = ((cp * mr) / 100);
    cout << "Dane:" << endl;
    cout << "Cp= " << cp << endl;
    cout << "Mr= " << mr << endl;
    cout << "Wzór to (Cp*mr):100%" << endl;
    cout << "Ms=" << ms << "gram" << endl;
    cout << "Dziêkujê za u¿ycie narzêdzia" << endl;
    cout << "seba0456" << endl;
    cin.sync();
    cin.get();

   }
   else if ( instrukcja== "mr" )
   {
        cout << "Podaj wartoœæ Cp" << endl;
    cin >> cp;
    cout << "Podaj watoœæ Ms" << endl;
    cin >> ms;
    mr = ((ms * 100) / cp);
    cout << "Dane:" << endl;
    cout << "Cp= " << cp << endl;
    cout << "Ms= " << ms << endl;
    cout << "Wzór to (ms*100%):cp%" << endl;
    cout << "Mr=" << mr << "gram" << endl;
    cout << "Dziêkujê za u¿ycie narzedzia" << endl;
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
        cout << "Podaj wartoœæ Cp" << endl;
    cin >> cp;
    cout << "Podaj watoœæ Mr" << endl;
    cin >> mr;
    ms = ((cp * mr) / 100);
    cout << "Dane:" << endl;
    cout << "Cp= " << cp << endl;
    cout << "Mr= " << mr << endl;
    cout << "Wzór to (Cp*mr):100%" << endl;
    cout << "Ms=" << ms << "gram" << endl;
    cout << "Dziêkujê za u¿ycie narzêdzia" << endl;
    cout << "seba0456" << endl;
    cin.sync();
    cin.get();
    return 0;
   }
   else if ( instrukcja== "mr" )
   {
        cout << "Podaj wartoœæ Cp" << endl;
    cin >> cp;
    cout << "Podaj watoœæ Ms" << endl;
    cin >> ms;
    mr = ((ms * 100) / cp);
    cout << "Dane:" << endl;
    cout << "Cp= " << cp << endl;
    cout << "Ms= " << ms << endl;
    cout << "Wzór to (ms*100%):cp%" << endl;
    cout << "Mr=" << mr << "gram" << endl;
    cout << "Dziêkujê za u¿ycie narzedzia" << endl;
    cout << "seba0456" << endl;
    cin.sync();
    cin.get();
    return 0;
   }
     }
}
