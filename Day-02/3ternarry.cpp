// 3 WAP IN C++ THAT TAKES 2  integer INPUT for the user and find the maximum of the using ternarry condition operator.

#include <iostream>
using namespace std;

int main() {
    int a ;
    cout<<"Enter value of a = ";
    cin>>a;
    
    int b ;
    cout<<"Enter value of b = ";
    cin>>b;
    
    int maxInt = (a > b) ? a : b;

    cout << "Maximum value is: " << maxInt << endl;
    return 0;
}