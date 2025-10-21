#include <bits/stdc++.h>
using namespace std;

void print_char(int n, char c) {
    for (int i = 0; i < n; i++) {
        cout << c;
        if (i != n - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        char C;
        cin >> N >> C;
        print_char(N, C);
    }

    return 0;
}

/*
Input
2
1 n
5 O

Output
n 
O O O O O 
*/