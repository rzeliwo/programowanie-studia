#include <iostream>
using namespace std;

int main() {
    double c;
    char wybor;

    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> c;

    cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
    cin >> wybor;

    switch (wybor) {
    case 'K':
    case 'k':
        cout << "Temperatura w Kelvinach: " << c + 273.15 << endl;
        break;

    case 'F':
    case 'f':
        cout << "Temperatura w stopniach Fahrenheita: " << (c * 9.0 / 5.0) + 32 << endl;
        break;

    default:
        cout << "Blad: nieprawidlowa jednostka." << endl;
    }

    return 0;
}