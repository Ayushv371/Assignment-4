// Write a program to print the cross pattern given below (in the shape of X):
// *   *
// *   *
//   *  
// *   *
// *   * 

#include <iostream>
using namespace std;

int main() {
int size=5;


if (size % 2 == 0) {
    cout << "Please enter an odd number for the size." << endl;
    return 1;
}

for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
        if (i == j || i == size - j - 1) {
            cout << "*";
        } else {
            cout << " ";
        }
    }
    cout << endl;
}

return 0;
}