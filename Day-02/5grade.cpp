// WAP that takes a student percentage between 0-100% calulate their grade base on following criateria:
//  1 - 90 above A
//  2 - 80-89 B
//  3 - 70-79 C
//  4 - 60-69 D
//  5 - below 60 F

#include <iostream>
using namespace std;

int main() {
    int grade ;
    cout<<"Enter percentage of Student = ";
    cin>>grade;
    
    if (grade >= 60) {
        if ( grade >= 70 ) {
            if (grade >= 80 ) {
                if (grade >= 90 ) {
                    cout << "Grade : A";
                } else {
                    cout << "Grade : B";    
                        }
            } else {
            cout << "Grade : c";
                   }
        } else {
        cout << "Grade : D"; 
        }
    } else {
            cout << "Grade : F";
            }

    return 0;
}
