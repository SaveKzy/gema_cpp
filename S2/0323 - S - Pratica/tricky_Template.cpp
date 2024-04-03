// https://codeforces.com/problemset/problem/1922/A

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t, n;

    cin >> t;

    string a, b, c;

    bool flag;

    for (int i = 0; i < t; i++) {
        
        flag = 0;

        cin >> n >> a >> b >> c;
        
        for (int j = 0; j < c.size(); j++) {

            if (c[j] != a[j] && c[j] != b[j]) {
                flag = 1;
                break;
            }

        }

        if (flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }

}