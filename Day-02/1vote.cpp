// 1 WAP c++ program that takes a person age as input from the user if the age is 18+ is eligible for vote .

#include <iostream>
using namespace std;

int main() {
    int age ;
    cout<<"Enter age = ";
    cin>>age;
    
    if (age<0 && age <= 18) {
        cout<<"Not eligible for vote.";
    } else {
        cout<<"Eligible for vote.";
    }

    return 0;
}