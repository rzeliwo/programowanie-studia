#include <iostream>
using namespace std;

int main() {
    double masa, wzrost;

    cout << "Podaj wage (w kg): ";
    cin >> masa;

    cout << "Podaj wzrost (w metrach): ";
    cin >> wzrost;

    if (wzrost <= 0) {
        cout << "Blad: wzrost musi byc wiekszy od 0." << endl;
        return 0;
    }

    double bmi = masa / (wzrost * wzrost);

    cout << "Twoje BMI wynosi: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Twoj stan wagowy: Niedowaga" << endl;
    }
    else if (bmi < 25) {
        cout << "Twoj stan wagowy: W normie" << endl;
    }
    else if (bmi < 30) {
        cout << "Twoj stan wagowy: Nadwaga" << endl;
    }
    else {
        cout << "Twoj stan wagowy: Otylosc" << endl;
    }

    return 0;
}