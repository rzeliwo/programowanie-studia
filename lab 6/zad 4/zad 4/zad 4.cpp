#include <iostream>
using namespace std;

int main() {
    int tab[10];
    int suma = 0;

    cout << "Podaj 10 liczb:\n";

    for (int i = 0; i < 10; i++) {
        cin >> tab[i];
    }

    cout << "Liczby parzyste: ";

    for (int i = 0; i < 10; i++) {
        if (tab[i] % 2 == 0) {
            cout << tab[i] << ", ";
            suma += tab[i];
        }
    }

    cout << "\nSuma liczb parzystych: " << suma << endl;

    return 0;
}