
// 4. WAP c++ that take 2 int input a and b multiply a by 4 using bitwise left shift operator and divide b by 8 using bitwise right shift operator.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    
    a=a<<2;
    b=b>>3;
    
    cout <<a<<endl<< b;

    return 0;
}