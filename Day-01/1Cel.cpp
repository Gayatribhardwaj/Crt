//1. WAP in c++ that takes integer value in Celsius as input from the user convert it into Fahrenheit as output.

#include <iostream>
using namespace std;

int main() {
    int Cel;
    cin>>Cel;
    
    int fah = (Cel * 9/ 5) + 32;
    cout<<fah;
   
    return 0;
}
