#include <iostream>
using namespace std;

int main() {
    int tab[10];

    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> tab[i];
    }

    int minVal = tab[0];

    for (int i = 1; i < 10; i++) {
        if (tab[i] < minVal) {
            minVal = tab[i];
        }
    }

    cout << "Najmniejsza liczba to: " << minVal << endl;

    return 0;
}