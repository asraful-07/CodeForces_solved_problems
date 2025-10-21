#include <bits/stdc++.h>
using namespace std;

void shift_right(vector<int>& arr, int n, int x) {
    x = x % n;
    if (x == 0) {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        return;
    }

    for (int i = n - x; i < n; i++) {
        cout << arr[i] << " ";
    }
 
    for (int i = 0; i < n - x; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    shift_right(A, N, X);

    return 0;
}


/*
Input
6 2
1 2 3 4 5 6

Output
2 1 
*/