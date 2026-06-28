#include <iostream>
#include <fstream>
using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

int main() {
    fstream plik("dane.txt", ios::in | ios::out | ios::app);

    if (!plik) {
        cout << "Plik nie istnieje. Tworzenie pliku..." << endl;
        ofstream nowy("dane.txt");
        nowy << "Jan Kowalski 25\n";
        nowy << "Anna Nowak 30\n";
        nowy.close();
    }

    char wybor;
    cout << "Czy chcesz dodac nowa osobe? (t/n): ";
    cin >> wybor;

    if (wybor == 't') {
        Osoba o;

        cout << "Podaj imie: ";
        cin >> o.imie;
        cout << "Podaj nazwisko: ";
        cin >> o.nazwisko;
        cout << "Podaj wiek: ";
        cin >> o.wiek;

        ofstream dopisz("dane.txt", ios::app);
        dopisz << o.imie << " " << o.nazwisko << " " << o.wiek << "\n";
        dopisz.close();
    }

    cout << "\nDane w pliku:\n";

    ifstream odczyt("dane.txt");

    string imie, nazwisko;
    int wiek;

    while (odczyt >> imie >> nazwisko >> wiek) {
        cout << "Imie: " << imie
            << ", Nazwisko: " << nazwisko
            << ", Wiek: " << wiek << endl;
    }

    odczyt.close();
    return 0;
}