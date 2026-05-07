// 4. WAP that takes an input from the user and print the first fibonacci series sequence in the nth term.

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    
    int f=1;
    int i=1;
    
    while(i<=n){
        f=f+i;
        i=i+1;
    }
    cout<<"Fibonacci series : "<<f;
}