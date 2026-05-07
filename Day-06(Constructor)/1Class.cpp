// public, private, protected class

#include<iostream>
using namespace std;

class stdut
{
    //Acess specifier
private:
    //Data member
    string name;
    int roll_no ;

public: 

void setData() {
    cout << "Enter your Name : ";
    cin >> name ;
    cout << "Enter your Roll Number : ";
    cin >> roll_no ;
}

void show () {
    cout << "Name : " << name << endl;
    cout << "Roll Number : " << roll_no << endl;  
}
};

int main() {

    stdut s1;

    s1.setData();
    s1.show() ;

    return 0;
}