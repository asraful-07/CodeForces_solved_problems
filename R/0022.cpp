#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string target = "EGYPT";
    while (s.find(target) != string::npos) {
        s.replace(s.find(target), target.size(), " ");
    }

    cout << s << endl;
    return 0;
}

/*
Input
ITALYKOREAEGYPTEGYPTALGERIAEGYPTZ

Output
ITALYKOREA  ALGERIA Z
*/