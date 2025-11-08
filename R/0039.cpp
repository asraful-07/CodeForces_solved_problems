#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n + 1];

    for (int i = 1; i <= n; i++)
    {
        int toWhomHeGifted;
        cin >> toWhomHeGifted;
        a[toWhomHeGifted] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    solve();

    return 0;
}

/*
Input
4
2 3 4 1

Output
3
2 3 1
*/