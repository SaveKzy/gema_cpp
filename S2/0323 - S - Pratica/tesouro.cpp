// https://neps.academy/br/exercise/2161

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, x, y;
    
    char in;
    
    cin >> n >> x >> y;
    
    for (int i = 0; i < n; i++) {
        
        cin >> in;
        
        if (in == 'C') {
            x--;
        } else if (in == 'B') {
            x++;
        } else if (in == 'D') {
            y++;
        } else {
            y--;
        }
        
    }
    
    cout << x << " " << y;

}