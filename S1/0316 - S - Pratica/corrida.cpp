//https://codeforces.com/contest/659/problem/D

#include <bits/stdc++.h>
using namespace std;

// [0,3]; [1,0]; [2,1]; [3,1]

int main() {

    int n, x, y, saveX, saveY, curvas;

    cin >> n;

    int movimento[n];

    for (int i = 0; i <= n; i++) {

        cin >> x >> y;

        if (i > 0) {

            if (x - saveX < 0) {
                movimento[i-1] = 3; // esquerda
            } else if (x - saveX > 0) {
                movimento[i-1] = 1; // direita
            } else if (y - saveY < 0) {
                movimento[i-1] = 2; // descer
            } else {
                movimento[i -1] = 0; // subir
            }

        }
        
        saveX = x;
        saveY = y;

    }

    for (int k = 0; k < n; k++) {
    	if ((movimento[k] == 0 && movimento[k+1] == 3) || (movimento[k] == 1 && movimento[k+1] == 0) || (movimento[k] == 2 && movimento[k+1] == 1) || (movimento[k] == 3 && movimento[k+1] == 2)) {
    		curvas++;
            //cout << k+1 << " & " << movimento[k] << " | " << movimento[k+1] << "\n";
    	}
    }
    
    cout << curvas;
}