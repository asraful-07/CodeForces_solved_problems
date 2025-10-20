#include <bits/stdc++.h>
using namespace std;

vector<int> fun()
{
    vector<int> a(6);
    for(int i = 0; i < 6; i++){
        cin >> a[i];
    }

    vector<int> b(10);
    for(int i = 0; i < 6; i++){
        b[i] = a[i];
    }

    b[6] = 12;
    b[7] = 12;
    b[8] = 12;
    b[9] = 12;

    for(int i = 0; i < 10; i++){
        cin >> b[i];
    }

    return b;
}

int main() {
    vector<int> x = fun();

    for(int i = 0; i < 10; i++){
    cout << x[i] << " ";
    }

    return 0;
}

/*
Input
5
1 2 3 4 5
10
6 7 8 9 10

Output
1 2 3 4 5 6 7 8 9 10
*/