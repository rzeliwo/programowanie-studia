#include <iostream>
using namespace std;

int CalculatePowerRecursive(int a, int b) {
    if (b == 0)
        return 1;
    return a * CalculatePowerRecursive(a, b - 1);
}

void DisplayResult(int a, int b, int wynik) {
    cout << a << " do potegi " << b << " wynosi: " << wynik << endl;
}

int main() {
    int a, b;

    cout << "Podaj liczbe podstawowa: ";
    cin >> a;

    cout << "Podaj wykladnik: ";
    cin >> b;

    int wynik = CalculatePowerRecursive(a, b);
    DisplayResult(a, b, wynik);

    return 0;
}