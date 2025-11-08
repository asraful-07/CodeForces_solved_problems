#include<bits/stdc++.h>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    cout << A.size() << " " << B.size() << endl;
    
    
    cout << A + B << endl;
    
   
    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;
    cout << A << " " << B << endl;
    
    return 0;
}

/*
Input
abcd
ef

Output
4 2
abcdef
ebcd af
*/