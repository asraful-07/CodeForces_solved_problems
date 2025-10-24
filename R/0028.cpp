#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string x;
    cin >> x; 

    stringstream ss(s);
    string word;
    int count = 0;

    while (ss >> word) {
        if (word == x) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}


/*
Input
6
Sanju Samson shamanta
samson jessica Bhatta 
Akib John takla john abraham
john baby Shark tank 
john

Output
2
*/