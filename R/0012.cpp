#include <iostream>
#include <climits>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        int A[N];

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int minResult = INT_MAX;

        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                int result = A[i] + A[j] + (j - i);
                if (result < minResult) {
                    minResult = result;
                }
            }
        }

        cout << minResult << endl;
    }

    return 0;
}


/*
Input
1
4
20 1 9 4

Output
7
*/