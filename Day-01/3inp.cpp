// 3 WAP that takes 3 int  input represent side of triangle print true if the tringle is equilater otherwise false. DO THIS USING LOGICAL and relational operator.


#include <iostream>
using namespace std;

int main() {
    int a, b,c;
    cin>>a>>b>>c;
    
    if(a==b && b==c){
        cout<<true;
    } else {
        cout<<false<<endl;
    }
    return 0;
}