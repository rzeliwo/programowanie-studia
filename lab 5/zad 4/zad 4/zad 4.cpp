#include <iostream>
using namespace std;

int main() {
    int w, k;
    cout << "Podaj liczbe wierszy: ";
    cin >> w;
    cout << "Podaj liczbe kolumn: ";
    cin >> k;

    int liczba = 1;

    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++) {
            cout << liczba << "\t";
            liczba += 2;
        }
        cout << endl;
    }

    return 0;
}