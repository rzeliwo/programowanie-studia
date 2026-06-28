#include <iostream>
using namespace std;

double suma(double a, double b) { return a + b; }
double roznica(double a, double b) { return a - b; }
double iloczyn(double a, double b) { return a * b; }
double iloraz(double a, double b) { return b != 0 ? a / b : 0; }

int main() {
    int wybor;
    double a, b;

    do {
        cout << "\nWybierz funkcje:\n";
        cout << "1. Suma\n2. Roznica\n3. Iloczyn\n4. Iloraz\n0. Wyjscie\n";
        cout << "Wybrana funkcja: ";
        cin >> wybor;

        if (wybor == 0) {
            cout << "Koniec programu.\n";
            break;
        }

        cout << "Podaj pierwsza liczbe: ";
        cin >> a;
        cout << "Podaj druga liczbe: ";
        cin >> b;

        switch (wybor) {
        case 1: cout << "Wynik: " << suma(a, b) << endl; break;
        case 2: cout << "Wynik: " << roznica(a, b) << endl; break;
        case 3: cout << "Wynik: " << iloczyn(a, b) << endl; break;
        case 4: cout << "Wynik: " << iloraz(a, b) << endl; break;
        default: cout << "Bledny wybor!\n";
        }

    } while (true);

    return 0;
}