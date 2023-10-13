#include <bits/stdc++.h>
using namespace std;

const int N = 505;
const long long inf = 1000ll * 1000 * 1000 * 1000 * 1000 * 1000 + 20;

int a[N];
long long dp[N][N];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 2; i <= n; i++) {
		for (int l = 1; l + i - 1 <= n; l++) {
			int r = l + i - 1;
			dp[l][r] = inf;
			for (int j = l; j < r; j++) {
				dp[l][r] = min(dp[l][r], dp[l][j] + dp[j + 1][r] + a[l - 1] * a[j] * a[r]);
			}
		}
	}
	cout << dp[1][n];
	return 0;
}
