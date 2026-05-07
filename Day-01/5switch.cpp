// 5 WAP in c++ that take 2 int input and an operator as input from the user performed the corresponding arithmetic operation on those number without using if-else conditions.

#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter value a = ";
    cin>>a;
    
    int b;
    cout<<"Enter value b = ";
    cin>>b;
    
    char op;
    cout<<"Write operator = ";
    cin>>op;
    
    cout<<"Output = ";
    
    switch(op){
        case '+': 
        cout<<a + b;
        break;
        
        case '-': 
        cout<<a - b;
        break;
        
        case '*': 
        cout<<a * b;
        break;
        
        case '/': 
        cout<<a / b;
        break;
        
        default :
        cout<<"ERROR";
    }
}
