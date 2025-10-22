#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        cout << word << " ";
    }
    
    return 0;
}

/*
Input
hi my name c++

Output
ih ym eman ++c 
*/