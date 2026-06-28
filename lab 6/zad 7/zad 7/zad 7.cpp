#include <iostream>
using namespace std;

int main() {
    int a[2][3];
    int t[3][2];

    cout << "Podaj 6 liczb do macierzy 2x3:\n";

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> a[i][j];
        }
    }

    // transpozycja
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            t[j][i] = a[i][j];
        }
    }

    cout << "\nTransponowana macierz:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}