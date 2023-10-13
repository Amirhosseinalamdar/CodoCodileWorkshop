#include <bits/stdc++.h>
using namespace std;

const int N = 1000 * 1000 + 5;

bool mark[N];

int main() {
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		if (!mark[i]) {
			cout << i << " ";
			for (int j = i * 2; j <= n; j += i) {
				mark[j] = true;
			}
		}
	}
	return 0;
}
