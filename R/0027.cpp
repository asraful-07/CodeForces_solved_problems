#include <bits/stdc++.h>
using namespace std;

class students
{
    public:
    string name;
    int roll;
    int mark;
};

bool cmp(students a, students b)
{
   return (a.mark == b.mark ) ? a.roll < b.roll : a.mark > b.mark;
}

int main() {
    int n;
    cin >> n;

    students  a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i].name >> a[i].roll >> a[i].mark;
    }
  
    sort(a, a+n,cmp);
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
Rakib 54 99
Akib 29 95
Zubair 57 93
Sakib 55 89
Ahsan 39 86
*/