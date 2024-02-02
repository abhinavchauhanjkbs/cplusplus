#include<iostream>
using namespace std;

void checkAlphabet(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << ch << " is an alphabet";
    } else {
        cout << ch << " is not an alphabet";
    }
}

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    checkAlphabet(ch);

    return 0;
}
