// Write a program to calculate the factorial of a number.

#include<iostream>
using namespace std;
int main(){

int num, fac=1;
cout<<"Enter a number to get its factorial: ";
cin>>num;

for(int n=1; n<=num; n++){
    fac*=n;
}

cout<<fac;

return 0;
}