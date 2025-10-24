#include <bits/stdc++.h>
using namespace std;

class students
{
    public:
    string name;
    int roll;
    int mark;
};

int main() {
    int n;
    cin >> n;

    students  a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i].name >> a[i].roll >> a[i].mark;
    }
  
    reverse(a, a + n);
    for(int i = 0; i < n; i++){
        cout << a[i].name << " " << a[i].roll <<  " " << a[i].mark << endl;
    }

    return 0;
}

/*
Input
6
Akib 29 95
Sakib 55 89
Rakib 54 99
Zubair 57 93
Ahsan 39 86
Joy 12 99

Output
Joy 12 99
Ahsan 39 86
Zubair 57 93
Rakib 54 99
Sakib 55 89
Akib 29 95
*/