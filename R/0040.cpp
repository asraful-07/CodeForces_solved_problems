#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("../input.txt", "r", stdin);

    string a, b, c, oldString;
    cin >> a >> b >> c;

    oldString = a + b;
    sort(oldString.begin(), oldString.end());
    sort(c.begin(), c.end());

    if (oldString == c)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
/*
Input
SANTACLAUS
DEDMOROZ
SANTAMOROZDEDCLAUS

Output
YES
*/