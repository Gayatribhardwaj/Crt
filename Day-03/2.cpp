//2. WAP that takes continuously integer as a input from user until user giver -ve number. print the all positive number sum.

#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    while (true) {
        cout << "Enter a number: ";
        cin >> num;

        if (num < 0) {
            break;  // stop when negative number is entered
        }

        sum += num;  // add positive numbers
    }

    cout << "Sum of positive numbers = " << sum;

    return 0;
}

