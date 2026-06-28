#include <iostream>
using namespace std;

int main() {
    char tekst[100];
    char znak;
    int pozycje[100];
    int licznik = 0;

    cout << "Podaj ciag znakow: ";
    cin.getline(tekst, 100);

    cout << "Podaj znak do zliczenia: ";
    cin >> znak;

    for (int i = 0; tekst[i] != '\0'; i++) {
        if (tekst[i] == znak) {
            pozycje[licznik] = i + 1; // pozycje od 1
            licznik++;
        }
    }

    cout << "Liczba wystapien znaku '" << znak << "': " << licznik << endl;

    cout << "Pozycje wystapien: ";
    for (int i = 0; i < licznik; i++) {
        cout << pozycje[i];
        if (i < licznik - 1) cout << ", ";
    }

    cout << endl;

    return 0;
}