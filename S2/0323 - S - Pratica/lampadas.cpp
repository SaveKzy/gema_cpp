// https://neps.academy/br/exercise/52

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, i, A = 0, B = 0;
    
    cin >> n;
    
    while (n--) {
        
        cin >> i;
        
        if (i%2) {
            
            if (A) {
                A = 0;
            } else {
                A = 1;
            }
            
        } else {
            
            if (A) {
                A = 0;
            } else {
                A = 1;
            }
            
            if (B) {
                B = 0;
            } else {
                B = 1;
            }
            
        }
        
    }
    
    cout << A << "\n" << B;
    
}