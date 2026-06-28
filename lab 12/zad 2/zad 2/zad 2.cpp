#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

int main() {
    int wybor;

    cout << "Wybierz operacje:\n";
    cout << "1 - Utworz nowy plik\n";
    cout << "2 - Usun plik\n";
    cout << "3 - Zmien nazwe pliku\n";
    cout << "Twoj wybor: ";
    cin >> wybor;

    if (wybor == 1) {
        string nazwa;
        cout << "Podaj nazwe nowego pliku: ";
        cin >> nazwa;

        ofstream plik(nazwa);
        plik.close();

        cout << "Plik '" << nazwa << "' zostal utworzony." << endl;
    }

    else if (wybor == 2) {
        string nazwa;
        cout << "Podaj nazwe pliku do usuniecia: ";
        cin >> nazwa;

        if (remove(nazwa.c_str()) == 0)
            cout << "Plik zostal usuniety." << endl;
        else
            cout << "Blad usuwania pliku." << endl;
    }

    else if (wybor == 3) {
        string stara, nowa;
        cout << "Podaj aktualna nazwe pliku: ";
        cin >> stara;
        cout << "Podaj nowa nazwe pliku: ";
        cin >> nowa;

        if (rename(stara.c_str(), nowa.c_str()) == 0)
            cout << "Plik zmieniono nazwe na " << nowa << endl;
        else
            cout << "Blad zmiany nazwy pliku." << endl;
    }

    else {
        cout << "Nieprawidlowy wybor." << endl;
    }

    return 0;
}