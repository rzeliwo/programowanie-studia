#include <iostream>
using namespace std;

double CalculateVolume(double a) {
    return a * a * a; // sześcian
}

double CalculateVolume(double a, double b, double h) {
    return a * b * h; // prostopadłościan
}

double CalculateVolume(double r, double h, bool isCylinder) {
    return 3.1415 * r * r * h; // walec
}

void DisplayResult(double v) {
    cout << "Objetosc wynosi: " << v << endl;
}

int main() {
    int wybor;

    cout << "Wybierz bryle do obliczenia objetosci:\n";
    cout << "1 - Szescian\n2 - Prostopadloscian\n3 - Walec\n";
    cout << "Wybierz numer bryly: ";
    cin >> wybor;

    double wynik;

    switch (wybor) {
    case 1: {
        double a;
        cout << "Podaj dlugosc boku: ";
        cin >> a;
        wynik = CalculateVolume(a);
        break;
    }

    case 2: {
        double a, b, h;
        cout << "Podaj dlugosc: ";
        cin >> a;
        cout << "Podaj szerokosc: ";
        cin >> b;
        cout << "Podaj wysokosc: ";
        cin >> h;
        wynik = CalculateVolume(a, b, h);
        break;
    }

    case 3: {
        double r, h;
        cout << "Podaj promien: ";
        cin >> r;
        cout << "Podaj wysokosc: ";
        cin >> h;
        wynik = CalculateVolume(r, h, true);
        break;
    }

    default:
        cout << "Bledny wybor!" << endl;
        return 0;
    }

    DisplayResult(wynik);

    return 0;
}