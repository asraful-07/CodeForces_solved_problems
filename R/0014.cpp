#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(string n, int r, char s, int m, int c) {
        name = n;
        roll = r;
        section = s;
        math_marks = m;
        cls = c;
    }
};

int main() {
    Student s1("Rahat", 101, 'A', 85, 10);
    Student s2("Jerin", 102, 'A', 92, 10);
    Student s3("Rehan", 103, 'B', 89, 10);
    Student s3("Jarah", 104, 'B', 88, 10);

    Student* top = &s1;

    if (s2.math_marks > top->math_marks)
        top = &s2;

    if (s3.math_marks > top->math_marks)
        top = &s3;

    cout << "Topper: " << top->name << endl;

    return 0;
}

/*
Input
Math result

Output
Topper: Jerin
*/