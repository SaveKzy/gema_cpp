// https://codeforces.com/contest/1669/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;

    cin >> n;

    for (int i = 0; i < n; i++) {
        
        cin >> m;
        
        if (m <= 1399) {
            cout << "Division 4\n";
        } else if (m <= 1599) {
            cout << "Division 3\n";
        } else if (m <= 1899) {
            cout << "Division 2\n";
        } else {
            cout << "Division 1\n";
        }
        
    }

}