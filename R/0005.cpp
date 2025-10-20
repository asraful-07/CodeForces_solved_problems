#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int minimum = min(a, min(b, c));
    int maximum = max(a, max(b, c));

    cout << minimum << " " << maximum << endl;

    return 0;
}

/*
Input
1 2 3

Output
1 3
*/