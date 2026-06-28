#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Podaj pierwszą liczbę: ";
    cin >> a;

    cout << "Podaj drugą liczbę: ";
    cin >> b;

    cout << "Suma: " << a + b << endl;
    cout << "Różnica: " << a - b << endl;
    cout << "Iloczyn: " << a * b << endl;

    if (b != 0) {
        cout << "Iloraz: " << a / b << endl;
        cout << "Reszta z dzielenia: " << a % b << endl;
    }
    else {
        cout << "Nie można dzielić przez zero!" << endl;
    }

    return 0;
}