// 4 types - single, multilevel, multiple, Hierarchica. 

#include<iostream>
using namespace std;

//Base Class or Parent Class
class Player
{
    public:
        string name;
        int runs;
    
        void setName(string n) 
        {
            name = n;
        }

        void setRuns(int r) {
            runs = r;
        }
};

//Dervied Class or Child CLass
class Cricketer : public Player {
    public:
    string country;
    Cricketer(string s) {
        country = s;
    }
    void show() {
        cout << "Name : " << name << endl ;
        cout << "Runs : " << runs << endl ;
        cout << "Country : " << country << endl ;
    }
};

int main() {
    int runs;
    cin >> runs;
    Cricketer c1("India");
    c1.setName("Virat kohli");
    c1.setRuns(runs);
}