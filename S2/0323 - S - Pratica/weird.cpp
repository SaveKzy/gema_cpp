// https://cses.fi/problemset/task/1068/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    
    cin >> n;
    
    cout << n;
    
    while (n!=1) {
        if (n%2) {
            n *= 3;
            n += 1;
        } else {
            n /= 2;
        } cout << " " << n;
    }   
}