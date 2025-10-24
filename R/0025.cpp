#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        int even = 0, odd = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        if (n % 2 != 0) {
            cout << -1 << endl;
        } 
        else if (even == odd) {
            cout << 0 << endl;
        } 
        else {
            cout << abs(even - odd) / 2 << endl;
        }
    }

    return 0;
}


/*
Input
6
3
4
1 2 3 4
4
1 1 1 1
3
1 2 3

Output
0
2
-1
*/