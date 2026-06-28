#include <iostream>
using namespace std;

int main() {
    int count = 0;

    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            for (int k = 0; k <= 9; k++) {

                if (i != j && i != k && j != k) {
                    cout << i << j << k << endl;
                    count++;
                }
            }
        }
    }

    cout << "\nLiczb bez powtarzajacych sie cyfr: " << count << endl;

    return 0;
}