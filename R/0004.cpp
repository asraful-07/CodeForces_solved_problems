#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int max = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if( x > max){
            max = x;
        }
    }
    
    cout << max << endl;
    return 0;
}

/*
Input 
4
7 8 3 2

Output
8
*/