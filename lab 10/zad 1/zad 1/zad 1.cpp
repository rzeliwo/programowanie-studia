#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;

    int* pa = &a;
    int* pb = &b;

    cout << "Przed modyfikacja:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    *pa = 15;
    *pb = 20;

    cout << "\nPo modyfikacji:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}