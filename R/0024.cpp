#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  
    cin >> t;  

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        set<char> solved; 
        int total = 0;

        for (char ch : s) {
            if (solved.find(ch) == solved.end()) {
                total += 2;
                solved.insert(ch);
            } else {
                total += 1;
            }
        }

        cout << total << endl;
    }

    return 0;
}

/*
Input
6
3
ABA
1
A
3
ORZ
5
BAAAA
4
BKPT
10
CODEFORCES


Output
5
2
6
7
8
17
*/