// Write a program to find the sum of n natural numbers.
// sum of natural num = n(n+1)/2

#include<iostream>
using namespace std;
int main(){

int sum, n;
cout<<"Enter number: ";
cin>>n;

if(n>0){
    cout<<(n*(n+1))/2;
}
else{
    cout<<"Digit should be greater than zero";
}

return 0;
}