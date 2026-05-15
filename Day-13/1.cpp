#include<iostream>
using namespace std;

int fun(int x) {
    if (x ==0) {
        return 0;
    }
    return (x%10) + (x/10);
}

int main () {
    int n;
    cin >> n;

    cout << fun(n) << endl;
    return 0;
}