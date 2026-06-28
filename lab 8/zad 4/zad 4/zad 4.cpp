#include <iostream>
using namespace std;

void GetArrayFromUser(int tab[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> tab[i];
    }
}

int FindMaxValue(int tab[], int size) {
    int maxVal = tab[0];

    for (int i = 1; i < size; i++) {
        if (tab[i] > maxVal)
            maxVal = tab[i];
    }

    return maxVal;
}

void DisplayResult(int maxVal) {
    cout << "Najwieksza liczba: " << maxVal << endl;
}

int main() {
    int tab[5];

    GetArrayFromUser(tab, 5);
    int maxVal = FindMaxValue(tab, 5);
    DisplayResult(maxVal);

    return 0;
}