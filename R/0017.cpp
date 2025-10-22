#include <iostream>
#include <iomanip>
using namespace std;

double calculateAverage(double arr[], int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

int main() {
    int n;
    cin >> n;
    
    double arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    double average = calculateAverage(arr, n);
    
    cout << fixed << setprecision(7) << average << endl;
    
    return 0;
}

/*
Input
3
1.0 2.0 5.0

Output
2.6666667
*/