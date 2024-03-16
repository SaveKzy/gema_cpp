//https://neps.academy/br/exercise/260

#include <bits/stdc++.h>
using namespace std;

int main() {

	int p1, c1, p2, c2, r1, r2;

	cin >> p1 >> c1 >> p2 >> c2;

	r1 = p1 * c1;
	r2 = p2 * c2;

	if (r1 == r2) {
		cout << 0;
	} else if (r1 < r2) {
		cout << 1;
	} else {
		cout << -1;
	}

}