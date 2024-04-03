// https://atcoder.jp/contests/abc345/tasks/abc345_a

#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    
    cin >> s;
    
    bool t = true;
    
    if (s[0] == '<' && s[s.size()-1] == '>') {
        for (int i = 1; i < s.size()-1; i++) {
            if (s[i] != '=') {
                t = false;
                break;
            }
        }   
    } else {
        t = false;
    }
    if (t) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}