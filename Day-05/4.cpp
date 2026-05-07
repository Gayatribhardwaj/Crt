// 4. WAP having 10% discount using refrance update the original bill amount.

// call by value
#include<iostream>
using namespace std;

int discount(int price) {
    int dis = 0.1* price;
    int orgPrice = price - dis ;
    return orgPrice;
}

int main() {
	int price; 
	cout << "Enter the bill amount : " ;
	cin >> price;
	
	cout << "Bill Price : " << discount(price) << endl;
	
	return 0;
}

// call by reference
