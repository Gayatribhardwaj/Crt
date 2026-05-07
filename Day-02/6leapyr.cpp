// 6  WAP in c++ that takes  a year as an input check it's a leap year or not. 

#include <iostream>
using namespace std;

int main() {
    int year;
    cout<<"Enter year";
    cin>>year;
    ((year%4==0 && year%100!=0 || year%400==0))?cout<<"true":cout<<"false";

    return 0;
}
