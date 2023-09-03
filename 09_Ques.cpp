// Write a C++ program to check whether a Number can be expressed as a
// Sum of Two Prime Numbers.

#include <iostream>
using namespace std;

bool isPrime(int num) {
if (num <= 1) {
    return false;
}
for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
        return false;
    }
}
return true;
}

int main() {
int num;

cout << "Enter a positive integer: ";
cin >> num;

if (num <= 1) {
    cout << "Please enter a positive integer greater than 1." << endl;
    return 1;
}

bool found = false;

for (int i = 2; i <= num / 2; i++) {
    if (isPrime(i) && isPrime(num - i)) {
        cout << num << " can be expressed as the sum of two prime numbers: " << i << " and " << num - i << endl;
        found = true;
        break;
    }
}

if (!found) {
    cout << num << " cannot be expressed as the sum of two prime numbers." << endl;
}

return 0;
}
