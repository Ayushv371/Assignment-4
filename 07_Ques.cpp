// Write a program to print + pattern given below :
//   *
//   *
// *****
//   *
//   * 

#include <iostream>
using namespace std;

int main() {
int n=5;


if (n % 2 == 0) {
    cout << "Please enter an odd number for the pattern size." << endl;
    return 1;
}

for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
        if (i == n / 2 + 1 || j == n / 2 + 1) {
            cout << "*";
        } else {
            cout << " ";
        }
    }
    cout << endl;
}

return 0;
}
