#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (char &c : s) {
        c = toupper(c);
    }

    map<char, int> cnt;
    for (char c : s) {
        cnt[c]++;
    }

    int ans = min({cnt['E'], cnt['G'], cnt['Y'], cnt['P'], cnt['T']});

    cout << ans << endl;
    return 0;
}

/*
Input
pemigdbeigyypetet

Output
2
*/