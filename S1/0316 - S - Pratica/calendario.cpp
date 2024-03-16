//https://codeforces.com/problemset/problem/760/A

#include <bits/stdc++.h>
using namespace std;
 
int mes28(int d) {
 
    if (d == 1) {
        cout << 4;
    } else {
        cout << 5;
    }
 
    return 0;
}
 
int mes30(int d) {
 
    if (d <= 6) {
        cout << 5;
    } else {
        cout << 6;
    }
 
    return 0;
}
 
int mes31(int d) {
 
    if (d <= 5) {
        cout << 5;
    } else {
        cout << 6;
    }
 
    return 0;
}
 
int main() {
 
    int m, d;
 
    cin >> m >> d;
 
    if (m == 2) mes28(d);
    else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) mes31(d);
    else mes30(d);
 
    return 0;  
}