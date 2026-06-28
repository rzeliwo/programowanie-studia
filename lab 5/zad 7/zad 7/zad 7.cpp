#include <iostream>
using namespace std;

int main() {
    int w, h;

    cout << "Podaj szerokosc: ";
    cin >> w;
    cout << "Podaj wysokosc: ";
    cin >> h;

    for (int i = 0; i < h; i++) {
        if (i == 0 || i == h - 1) {
            for (int j = 0; j < w; j++)
                cout << "-";
        }
        else {
            for (int j = 0; j < w; j++) {
                if (j == 0 || j == w - 1)
                    cout << "|";
                else if ((i + j) % 2 == 0)
                    cout << "#";
                else
                    cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}