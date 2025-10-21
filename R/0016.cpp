#include<bits/stdc++.h>
using namespace std;

class Footballer {
public:
    string name;
    int jersey_no;
    string country;
};

int main() {
    Footballer* messi = new Footballer;
    messi->name = "Messi";
    messi->jersey_no = 10;
    messi->country = "Argentina";

    Footballer* ronaldo = new Footballer;

    ronaldo->name = messi->name;
    ronaldo->jersey_no = messi->jersey_no;
    ronaldo->country = messi->country;

    delete messi;

    cout << ronaldo->name << " " << ronaldo->name << " "
         << ronaldo->jersey_no << " " << ronaldo->country << endl;

    delete ronaldo;

    return 0;
}


/*
Input
Football 

Output
Messi Messi 10 Argentina
*/