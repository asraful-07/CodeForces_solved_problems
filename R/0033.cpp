#include<bits/stdc++.h>
using namespace std;

int main() {
    string S;
    getline(cin, S);
    
    for (char &c : S) {
        if (c == ',') {
            c = ' ';
        } else if (isupper(c)) {
            c = tolower(c);
        } else if (islower(c)) {
            c = toupper(c);
        }
    }
    
    cout << S << endl;
    
    return 0;
}
/*
Input
happy,NewYear,enjoy

Output
HAPPY nEWyEAR ENJOY
*/