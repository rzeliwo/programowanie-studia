#include <iostream>
using namespace std;

int main() {
    int tab[5];

    cout << "Wprowadź 5 liczb całkowitych:\n";

    for (int i = 0; i < 5; i++) {
        cin >> tab[i];
        if (tab[i] < 0) {
            tab[i] = 0;
        }
    }

    cout << "Liczby ujemne zamienione na 0: ";

    for (int i = 0; i < 5; i++) {
        cout << tab[i];
        if (i < 4) cout << ", ";
    }

    cout << endl;

    return 0;
}