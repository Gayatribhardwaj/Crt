//2 WAP in c++ that takes global integer variable initialized to 100 in the main function take input user perform floating point of the global variable by the user input using explicit type casting and store in a local double variable then print.

#include <iostream>
using namespace std;
int g = 100;

int main() {
      
      int n;
      cin>>n;
       
      double a=(double)g/n;
      cout<<a<<endl;

    return 0;
}