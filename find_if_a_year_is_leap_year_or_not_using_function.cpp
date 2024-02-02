#include<iostream>
using namespace std;

void checkLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "This is a Leap Year";
    } else {
        cout << "This is not a Leap Year";
    }
}

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    checkLeapYear(year);

    return 0;
}
