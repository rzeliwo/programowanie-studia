#include <iostream>
using namespace std;

void FindMinMax(float* tab, int size, float* minVal, float* maxVal) {
    *minVal = tab[0];
    *maxVal = tab[0];

    for (int i = 1; i < size; i++) {
        if (tab[i] < *minVal)
            *minVal = tab[i];

        if (tab[i] > *maxVal)
            *maxVal = tab[i];
    }
}

int main() {
    float tab[10] = { 1.5, -3.2, 4.8, 7.0, -1.1, 0.0, 3.3, -6.6, 8.9, 2.2 };

    float minVal, maxVal;

    FindMinMax(tab, 10, &minVal, &maxVal);

    cout << "Najwieksza liczba: " << maxVal << endl;
    cout << "Najmniejsza liczba: " << minVal << endl;

    return 0;
}