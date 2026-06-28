#include <iostream>
using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

int main() {
    Osoba o1 = { "Jan", "Kowalski", 25 };

    cout << "Dane przed modyfikacja:\n";
    cout << "Imie: " << o1.imie
        << ", Nazwisko: " << o1.nazwisko
        << ", Wiek: " << o1.wiek << endl;

    o1.wiek = 30;

    cout << "\nDane po modyfikacji:\n";
    cout << "Imie: " << o1.imie
        << ", Nazwisko: " << o1.nazwisko
        << ", Wiek: " << o1.wiek << endl;

    return 0;
}