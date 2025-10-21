#include<bits/stdc++.h>
using namespace std;

class Cricketer {
public:
    int jersey_no;
    string country;
};

int main() {
   
    Cricketer* dhoni = new Cricketer;

    dhoni->jersey_no = 7;
    dhoni->country = "India";

    Cricketer* kohli = new Cricketer;
    kohli->jersey_no = dhoni->jersey_no;
    kohli->country = dhoni->country;

    delete dhoni;

    // 4. Print kohli's data
    cout << "Kohli Jersey No: " << kohli->jersey_no << endl;
    cout << "Kohli Country: " << kohli->country << endl;

    // Delete kohli
    delete kohli;

    return 0;
}

/*
Input
jersey_no

Output
Kohli Jersey No: 18
Kohli Country: India
*/