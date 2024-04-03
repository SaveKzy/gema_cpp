// https://neps.academy/br/exercise/216

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin >> n;

    cout << "1";

    for (int i = 2; i <= n; i++) {
        
        if (!(n % i)) {
            cout << " " << i;
        }
        
    }

}