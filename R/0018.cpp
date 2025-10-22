#include <iostream>
using namespace std;

// Function to concatenate arrays and store result in C
void concatenateArrays(int A[], int B[], int C[], int N) {
    // Copy B to first half of C
    for (int i = 0; i < N; i++) {
        C[i] = B[i];
    }
    
    // Copy A to second half of C
    for (int i = 0; i < N; i++) {
        C[i + N] = A[i];
    }
}

int main() {
    int N;
    cin >> N;
    
    int A[N], B[N], C[2 * N];
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    
    concatenateArrays(A, B, C, N);
    
    for (int i = 0; i < 2 * N; i++) {
        cout << C[i];
        if (i < 2 * N - 1) {
            cout << " ";
        }
    }
    cout << endl;
    
    return 0;
}


/*
Input
2
1 2
3 4

Output
3 4 1 2 
*/