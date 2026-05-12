// Using recursion write factorial in cpp

#include<iostream>
using namespace std;

int fact(int n) {
    if( n == 1 || n == 0) {
        return 1;
    }
    return n * fact(n-1);
}

int main() {
    int n;
    cout << "Enter value od n : " ;
    cin >> n ;

    
    cout << "Factorial is : " << fact(n);
    return 0;
}