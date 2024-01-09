#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string imie, nazwisko, numer;

    cout << "Podaj imie" << endl;               cin >> imie;
    cout << "Podaj nazwisko" << endl;           cin >> nazwisko;
    cout << "Podaj numer telefonu" << endl;     cin >> numer;

    fstream plik;

    plik.open("wizytowka.txt", ios::out | ios::app);

    plik << imie        << endl;
    plik << nazwisko    << endl;
    plik << numer       << endl;

    plik.close();

    return 0;
}
