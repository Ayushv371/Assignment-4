// Write a program to print alphabet diamond pattern:
//     A
//    ABC
//   ABCDE
//  ABCDEFG
// ABCDEFGHI
//  ABCDEFG
//   ABCDE
//    ABC
//     A

#include <iostream>
using namespace std;

int main() {
int n=9;

if (n % 2 == 0) {
    cout << "Please enter an odd number for the diamond size." << endl;
    return 1;
}


for (int i = 1; i <= n; i += 2) {
   
    for (int j = 0; j < (n - i) / 2; j++) {
        cout << " ";
    }

    for (char ch = 'A'; ch < 'A' + i; ch++) {
        cout << ch;
    }

    cout << endl;
}

// Lower half of the diamond
for (int i = n - 2; i >= 1; i -= 2) {
    // Print spaces before letters
    for (int j = 0; j < (n - i) / 2; j++) {
        cout << " ";
    }

    // Print letters
    for (char ch = 'A'; ch < 'A' + i; ch++) {
        cout << ch;
    }

    cout << endl;
}

return 0;
}
