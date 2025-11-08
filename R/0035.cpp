#include<bits/stdc++.h>
using namespace std;

// Function to check if string is Good
bool isGood(string s) {
    // Check if "101" or "010" exists as substring
    if (s.find("101") != string::npos || s.find("010") != string::npos) {
        return true;
    }
    return false;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        string S;
        cin >> S;
        
        if (isGood(S)) {
            cout << "Good" << endl;
        } else {
            cout << "Bad" << endl;
        }
    }
    
    return 0;
}

/*
Input
abcd
ef

Output
4 2
abcdef
ebcd af
*/