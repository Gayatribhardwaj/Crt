#include<iostream>
using namespace std;

int main() {
	int value = 100 ;
	int *p = &value ;
	cout << "Value of pointer : " << *p <<endl ;
	cout << "Value of address : " << p << endl;
	
	*p = 200 ;
	cout << "Value of pointer : " << *p <<endl ;
	cout << "Value : " << value <<endl;
	cout << "Value of address : " << p << endl;
	
	
	return 0;
}

