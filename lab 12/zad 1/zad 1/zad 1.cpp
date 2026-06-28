#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream plik("dane.txt");

    if (!plik) {
        cout << "Nie mozna otworzyc pliku!" << endl;
        return 1;
    }

    string imie, nazwisko;
    int wiek;

    while (plik >> imie >> nazwisko >> wiek) {
        cout << "Imie: " << imie
            << ", Nazwisko: " << nazwisko
            << ", Wiek: " << wiek << endl;
    }

    plik.close();
    return 0;
}