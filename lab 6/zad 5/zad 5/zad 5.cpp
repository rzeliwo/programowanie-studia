#include <iostream>
using namespace std;

int main() {
    int tab[3][3];
    int suma = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Podaj liczbe dla [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> tab[i][j];
            suma += tab[i][j];
        }
    }

    double srednia = suma / 9.0;

    cout << "Srednia liczb: " << srednia << endl;

    return 0;
}