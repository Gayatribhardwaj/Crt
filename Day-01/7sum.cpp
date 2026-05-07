//7.  WAP in c++ that take 3 int input from the user calculate the total sum of these variable and find average.

#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter value a = ";
    cin>>a;
    
    int b;
    cout<<"Enter value b = ";
    cin>>b;
    
    int c;
    cout<<"Enter value c = ";
    cin>>c;
    
    int sum = a+b+c;
    cout<<"Sum = "<<sum<<endl;
    
    float avg = (float)sum/3;
    cout<<"Average = "<<avg<<endl;
    
}