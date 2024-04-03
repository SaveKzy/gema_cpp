// https://neps.academy/br/exercise/323

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, out = 0;

    while (cin >> n) if (n > out) out = n;
    
    cout << out;

}