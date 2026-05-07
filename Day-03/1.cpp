//1. WAP that takes input from user that print all number one to n that is divisible by two.

#include<iostream>
using namespace std;

int main() {
    int n ;
    cout<<"Enter n value : ";
    cin>>n;
    
    for (int i = 1; i<=n; i++ ) {

        if(i%2==0) {
            cout<<"Print the number"<<i<<endl;
        }
    }
}