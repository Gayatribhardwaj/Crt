// 2. Write a function that takes number as input in cock-tail . You have to print total volume of the cock if in each bottle 250ml cock. 

#include<iostream>
using namespace std;

int cockVol(int n) {
int vol = n * 250 ;
	return vol;
}

int main() {
	int n;
	cout << "Enter the number of Cock-tails : " << endl;
	cin >> n;
    cout<<cockVol(n)<<endl;
	return 0;
}

