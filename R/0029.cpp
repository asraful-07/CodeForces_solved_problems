#include <bits/stdc++.h>
using namespace std;

// Function to shift zeros to the right using two pointers
void shiftZerosRight(vector<int>& arr) {
    int left = 0;
    
    // Move non-zero elements to the left
    for (int right = 0; right < arr.size(); right++) {
        if (arr[right] != 0) {
            swap(arr[left], arr[right]);
            left++;
        }
    }
}

int main() {
    int n;
    cin >> n;
    
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    shiftZerosRight(A);
    
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    
    return 0;
}

/*
Input
4
2 0 0 5

Output
2 5 0 0 
*/