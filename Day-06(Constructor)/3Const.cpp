//Construvting Overlloading

#include<iostream>
using namespace std;

class student {
    public:
    int roll_no;
    string name;

    student() {
        name = "unknown" ;
        roll_no = 0;
    }

    student (string n, int r) {
        name = n;
        roll_no = r;
    }

    void show(){
        cout << "Name : " << name << endl;
        cout << "Roll Number : " << roll_no << endl;
    }
};

int main() {
    //s1 calling default constructer
    student s1;
    s1.show();

    // s2 objects calling parameters constructer
    student s2("Gori", 18);
    s2.show();
    return 0;

}