#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    double ms;
    double mr;
    double cp;
    cout << "Hello world! V.1.0 ()seba0456" << endl;
    cout << "Witaj w kalkulatorze stezenia procentowego!" << endl;
    cout << "Oto krotka instrukcja." << endl;
    cout << "1.Prosze by wartosc 'Ms' byla podawana w kilogramach" << endl;
    cout << "2.Prosze by wartosc 'Mr' byla podawana w kilogramach" << endl;
    cout << "Dzieki tym zabiegom nie muszisz podawac jednostek" << endl;
    cout << "Zaczynamy!" << endl;
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
