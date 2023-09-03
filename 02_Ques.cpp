// Write a program to print all Armstrong numbers between 100 to 500.

#include<iostream>

#include<math.h>

using namespace std;

int main() {

    int i, j, s;

        for(i=100; i<=500; i++){

            s=0;

            for(j=i; j!=0; j=j/10){

                s=s+(pow((j%10), 3));              

                if(s==i)

                cout<<i<<endl;

        }

    }

}