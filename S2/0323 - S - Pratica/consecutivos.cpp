// https://neps.academy/br/exercise/110

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, v, out = 1, ant, maior = 0;
    
    cin >> n;
    
    cin >> v;
    
    for (int i = 0; i < n-1; i++) {
        
        ant = v;
        
        cin >> v;
        
        if (v == ant) {
            out++;
        } else {
            if (maior < out) {
                maior = out;
            }
            out = 1;
        }
        
    }
    
    if (maior < out) maior = out;
    
    cout << maior;

}