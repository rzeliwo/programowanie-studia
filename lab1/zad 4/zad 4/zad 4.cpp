#include <iostream>
using namespace std;

int main() {
    string imie;
    int wiek;

    cout << "Podaj swoje imię: ";
    cin >> imie;

    cout << "Podaj swój wiek: ";
    cin >> wiek;

    cout << "Witaj, " << imie << "! Masz " << wiek << " lat." << endl;

    return 0;
}