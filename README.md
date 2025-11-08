# 🚀 Codeforces Problem Solving Journey

Hi there! 👋  
I'm **ASRAFUL ISLAM**, a passionate programmer from **Bangladesh**, currently solving competitive programming problems to sharpen my algorithmic thinking and problem-solving skills.

This repository contains all of my **Codeforces** problem solutions — written mostly in **C++**, with some in **Python** and **JavaScript** as I continue learning and experimenting.

---

## 🎯 Progress Overview

| Platform      | Solved Problems          | Language Used     |
| ------------- | ------------------------ | ----------------- |
| 🧠 Codeforces | **240+ problems solved** | C++ / Python / JS |

> I'm continuously practicing to improve my logic building, speed, and efficiency in competitive programming.

---

## 🧩 Topics I’ve Practiced

- ✅ Implementation
- ✅ Sorting and Searching
- ✅ Strings and Characters
- ✅ Math and Number Theory
- ✅ Arrays and Vectors
- ✅ Loops and Conditions
- ✅ Functions and Recursion
- ✅ Data Structures (Stack, Queue, Set, Map)
- ✅ STL (Standard Template Library)
- ✅ Greedy Algorithms and Brute Force

---

## 🧠 Example Problem

```cpp
// Problem: 116A - Tram
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a, b, curr = 0, cap = 0;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        curr = curr - a + b;
        cap = max(cap, curr);
    }
    cout << cap << endl;
}
```
