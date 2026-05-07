// 1. function ()

#include<iostream>
using namespace std;
void printMsg() {
    cout << "Hellow World from the function call" << endl;
}
int main() {
    
        cout << "Hello World!" << endl;
        printMsg();
}

//arguments with return type

#include<iostream>
using namespace std;
void printMsg() {
    cout << "Hellow World from the function call" << endl;
}


void add (int a, int b) {
    cout<< a+b << endl ;
}

int main() {
    add(3,4);
}
