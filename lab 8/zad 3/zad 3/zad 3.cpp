#include <iostream>
#include <string>
using namespace std;

string GetTextFromUser() {
    string text;
    getline(cin, text);
    return text;
}

string ReverseString(string text) {
    string rev = "";
    for (int i = text.size() - 1; i >= 0; i--) {
        rev += text[i];
    }
    return rev;
}

void DisplayResult(string text) {
    cout << "Odwrocony ciag: " << text << endl;
}

int main() {
    cout << "Podaj ciag znakow: ";
    string text = GetTextFromUser();

    string rev = ReverseString(text);
    DisplayResult(rev);

    return 0;
}