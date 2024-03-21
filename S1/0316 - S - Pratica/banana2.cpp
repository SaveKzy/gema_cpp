//https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>
using namespace std;

int main() {

	long long int k, n, w, total = 0;

	cin >> k >> n >> w;

  total = k * w * (w + 1) / 2;

	if (n >= total) {
		cout << 0;
	} else {
		cout << (total - n);
	}

}
