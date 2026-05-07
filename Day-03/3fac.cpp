// 3 WAP that takes an positive integer n from the user you have to calculate the factorial of n .

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    
    int f=1;
    int i=1;
    
    while(i<=n){
        f=f*i;
        i=i+1;
    }
    cout<<"Factorial : "<<f;
}