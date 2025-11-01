#include <bits/stdc++.h>
using namespace std;

void swapRows(vector<vector<int>>& matrix, int X, int Y) {
    swap(matrix[X-1], matrix[Y-1]);
}

void swapColumns(vector<vector<int>>& matrix, int X, int Y) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        swap(matrix[i][X-1], matrix[i][Y-1]);
    }
}

void printMatrix(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j];
            if (j < n - 1) cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    
    vector<vector<int>> A(N, vector<int>(N));
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
    
    swapRows(A, X, Y);
    swapColumns(A, X, Y);
    
    printMatrix(A);
    
    return 0;
}
/*
Input
4 3 1
1 2 3 -5
-5 4 0 3
7 7 1 2
40 6 5 11

Output
1 7 7 2 
0 4 -5 3 
3 2 1 -5 
5 6 40 11 
*/