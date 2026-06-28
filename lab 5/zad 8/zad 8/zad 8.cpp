#include <iostream>
using namespace std;

int main() {
    int w, h;

    cout << "Podaj szerokosc: ";
    cin >> w;
    cout << "Podaj wysokosc: ";
    cin >> h;

    for (int i = 0; i < h; i++) {
        for (int s = 0; s < i; s++)
            cout << " ";

        for (int j = 0; j < w - 2 * i; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}