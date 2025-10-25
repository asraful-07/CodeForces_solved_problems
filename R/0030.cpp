#include <bits/stdc++.h>
using namespace std;

int getMax(const vector<int>& arr) {
    int maxNum = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }
    return maxNum;
}

int getMin(const vector<int>& arr) {
    int minNum = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < minNum) {
            minNum = arr[i];
        }
    }
    return minNum;
}

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int countPrimes(const vector<int>& arr) {
    int count = 0;
    for (int num : arr) {
        if (isPrime(num)) {
            count++;
        }
    }
    return count;
}

bool isPalindrome(int num) {
    if (num < 10) return true; 
    
    int original = num;
    int reversed = 0;
    
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    
    return original == reversed;
}

int countPalindromes(const vector<int>& arr) {
    int count = 0;
    for (int num : arr) {
        if (isPalindrome(num)) {
            count++;
        }
    }
    return count;
}

int countDivisors(int num) {
    if (num == 1) return 1;
    
    int count = 0;
    for (int i = 1; i * i <= num; i++) {
        if (num % i == 0) {
            count++;
            if (i != num / i) {
                count++;
            }
        }
    }
    return count;
}

int getMaxDivisorsNumber(const vector<int>& arr) {
    int maxDivisors = 0;
    int result = arr[0];
    
    for (int num : arr) {
        int divisors = countDivisors(num);
        
        if (divisors > maxDivisors) {
            maxDivisors = divisors;
            result = num;
        }
        else if (divisors == maxDivisors) {
            if (num > result) {
                result = num;
            }
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    cout << "The maximum number : " << getMax(A) << endl;
    cout << "The minimum number : " << getMin(A) << endl;
    cout << "The number of prime numbers : " << countPrimes(A) << endl;
    cout << "The number of palindrome numbers : " << countPalindromes(A) << endl;
    cout << "The number that has the maximum number of divisors : " << getMaxDivisorsNumber(A) << endl;
    
    return 0;
}


/*
Input
4
1 2 5 8

Output
The maximum number : 8
The minimum number : 1
The number of prime numbers : 2
The number of palindrome numbers : 4
The number that has the maximum number of divisors : 8

*/