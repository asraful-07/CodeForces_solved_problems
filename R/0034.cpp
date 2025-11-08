#include<bits/stdc++.h>
using namespace std;

bool isOdd(int n) {
    return n % 2 != 0;
}

bool isBinaryPalindrome(int n) {
    string binary = "";
    
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    
    int left = 0, right = binary.length() - 1;
    while (left < right) {
        if (binary[left] != binary[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    
    if (N > 0 && isOdd(N) && isBinaryPalindrome(N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}


/*
Input
4

Output
NO
*/