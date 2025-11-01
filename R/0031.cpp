#include <bits/stdc++.h>
using namespace std;

int countDistinctNumbers(const vector<int>& arr) {
    set<int> distinctSet;
    
    for (int num : arr) {
        distinctSet.insert(num);
    }
    
    return distinctSet.size();
}

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int distinctCount = countDistinctNumbers(A);
    cout << distinctCount << endl;
    
    return 0;
}

/*
Input
3
1 2 2

Output
2
*/