// Write a program to reverse a given integer number.
// 4 5 6 7 8

#include <iostream>
using namespace std;

int main() {
int num, reversedNum = 0;
    
cout << "Enter an integer: ";
cin >> num;
    
while (num != 0) {
    int digit = num % 10;
    reversedNum = reversedNum * 10 + digit;
    num /= 10;
}

cout << "Reversed number: " << reversedNum << endl;

return 0;
}