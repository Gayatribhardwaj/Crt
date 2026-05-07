// 4 WAP in C++ that takes  an interger as an input thn print the all number 1 to n but escape any number that's multiply of 4 using continue statement.

#include <iostream>
using namespace std;

int main() {
    int n ;
    cout<<"Enter value of n = ";
    cin>>n;
    
    for (int i = 1; i<= n; i++) {
        if (i%4 ==0) {
            continue ;
        }
    cout << "Numbera are : " << i << endl;
    }

    return 0;
}