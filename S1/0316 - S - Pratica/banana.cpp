//https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>
using namespace std;

int main() {

	long long int k, n, w, total = 0;

	cin >> k >> n >> w;

	for (int i = 1; i  <= w; i++) {

		total += k * i;

	}

	if (n >= total) {
		cout << 0;
	} else {
		cout << (total - n);
	}

}