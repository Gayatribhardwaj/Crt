// 2 WAP in c++ program takes an input in integer representing a person A. Based on the input determined and display the messages using conditional statement. 
// First condition, if 18-79, elegible to vote,
// second, it is more then 100 its comes in senior citizen & eligible to vote.
// third,  100 and comes in century & citizen & eligible to vote.
// forth, 0-17 comes in not eligible.

#include <iostream>
using namespace std;

int main() {
    int age ;
    cout<<"Enter age = ";
    cin>>age;
    
    if (age >= 100 ) {
        cout<<"Century and eligible for vote.";
    } 
    
    else if(age >= 80 && age < 100 ) {
        cout<<"Senior citizens and eligible for vote.";
    } 
    
    else if(age >= 18 && age < 80 ) {
        cout<<"Eligible for vote.";
    } 
    
    else if(age<0 && age < 18) {
        cout<<"Not eligible for vote.";
    } 
    
    else {
        cout<<"Not eligible for vote.";
    }
}