// Write a C++ program to print a triangle of prime numbers
// upto given number of lines of the triangle.

#include <iostream>
using namespace std;

int main() {
int n;

cout << "Enter the number of lines for the prime number triangle: ";
cin >> n;

if (n <= 0) {
    cout << "Please enter a positive number of lines." << endl;
    return 1;
}

int currentNumber = 2; 
int lineNumber = 1;

while (lineNumber <= n) {
    int isPrime = 1;
    for (int i = 2; i * i <= currentNumber; i++) {
        if (currentNumber % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime) {
        for (int i = 1; i <= lineNumber; i++) {
            cout << currentNumber << " ";
            currentNumber++;
        }
        cout << endl;
        lineNumber++;
    } else {
        currentNumber++;
    }
}

return 0;
}
