#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void LosujTablice(int* tab, int size, int a, int b) {
    for (int i = 0; i < size; i++) {
        tab[i] = a + rand() % (b - a + 1);
    }
}

bool SprawdzLiczbe(int* liczba, int* tab, int size) {
    for (int i = 0; i < size; i++) {
        if (*liczba == tab[i])
            return true;
    }
    return false;
}

int main() {
    srand(time(NULL));

    int n, a, b;

    cout << "Ile liczb wylosowac: ";
    cin >> n;

    cout << "Wartosc poczatkowa: ";
    cin >> a;

    cout << "Wartosc koncowa: ";
    cin >> b;

    int tab[100];

    LosujTablice(tab, n, a, b);

    cout << "Tablica: ";
    for (int i = 0; i < n; i++)
        cout << tab[i] << " ";
    cout << endl;

    int liczba, proby = 0;

    do {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        proby++;

        if (SprawdzLiczbe(&liczba, tab, n)) {
            cout << "Zgadles!" << endl;
            break;
        }
        else {
            cout << "Nie zgadles" << endl;
        }

    } while (true);

    cout << "Zgadles za " << proby << " razem." << endl;

    return 0;
}