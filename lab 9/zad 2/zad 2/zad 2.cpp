#include <iostream>
using namespace std;

int Fibonacci(int n) {
    if (n == 1 || n == 2)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int GetNumberFromUser() {
    int n;
    cout << "Podaj liczbe elementow: ";
    cin >> n;
    return n;
}

void DisplayFibonacciSequence(int n) {
    cout << "Ciag Fibonacciego: ";

    for (int i = 1; i <= n; i++) {
        cout << Fibonacci(i);
        if (i < n) cout << ", ";
    }

    cout << endl;
}

int main() {
    int n = GetNumberFromUser();
    DisplayFibonacciSequence(n);

    return 0;
}