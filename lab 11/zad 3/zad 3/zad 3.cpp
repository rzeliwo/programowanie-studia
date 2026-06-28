#include <iostream>
using namespace std;

struct Samochod {
    string marka;
    string model;
    int rok_produkcji;
};

void WyswietlDane(Samochod s) {
    cout << "Dane samochodu:\n";
    cout << "Marka: " << s.marka << endl;
    cout << "Model: " << s.model << endl;
    cout << "Rok produkcji: " << s.rok_produkcji << endl;
}

int main() {
    Samochod s1 = { "Toyota", "Corolla", 2018 };

    WyswietlDane(s1);

    return 0;
}