//6. WAP in c++ that take 2 int input swip their values using temporary variable and print the updated value.

#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter value a = ";
    cin>>a;
    
    int b;
    cout<<"Enter value b = ";
    cin>>b;
    
    int temp;
    temp= a;
    a= b;
    b= temp;
    
    cout<<"a = "<<a<<endl<<"b = "<<b;
}