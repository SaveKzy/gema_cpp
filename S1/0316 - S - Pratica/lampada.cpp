//https://neps.academy/br/exercise/59

#include <bits/stdc++.h>
using namespace std;

int main() {

    int ia, ib, fa, fb, a, b;
    
    cin >> ia >> ib >> fa >> fb;

    a = (ia + fa) %2;
    b = (ib + fb) %2;

    if (b == 0) {
        cout << a;
    } else {
        if (a == 0) {
            cout << 2;
        } else {
            cout << 1;
        }
    }

}
