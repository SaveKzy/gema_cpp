// https://codeforces.com/problemset/problem/1915/D

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t, n, i;
    
    string s;
    
    cin >> t;
    
    while (t--) {
        
        cin >> n >> s;
        
        for (i = 0; i < n-2; i++) {
            
            cout << s[i];
            
            if (s[i] == 'a' || s[i] == 'e') {
                
                if (s[i+2] == 'a' || s[i+2] == 'e') {
                    
                    cout << ".";
                    
                } else {
                    
                    cout << s[i+1] << ".";
                    i++;
                }
                
            }
            
        }
        
        cout << s[i] << s[i+1] << "\n";
        
    }
    
}