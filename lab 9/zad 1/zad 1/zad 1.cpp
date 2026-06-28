#include <iostream>
using namespace std;

int CalculateSumRecursive(int n) {
    if (n == 1)
        return 1;
    return n + CalculateSumRecursive(n - 1);
}

int GetNumberFromUser() {
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    return n;
}

void DisplayResult(int wynik, int n) {
    cout << "Suma liczb od 1 do " << n << " wynosi: " << wynik << endl;
}

int main() {
    int n = GetNumberFromUser();
    int wynik = CalculateSumRecursive(n);
    DisplayResult(wynik, n);

    return 0;
}