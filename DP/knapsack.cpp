#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
const int inf = 1000 * 1000 * 1000;

int v[N];
int w[N];
int dp[N][N];

int main() {
	int n, s;
	cin >> n >> s;
	for (int i = 1; i <= n; i++) {
		cin >> w[i] >> v[i];
	}
	dp[0][0] = 0;
	for (int j = 1; j <= s; j++) {
		dp[0][j] = -inf;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= s; j++) {
			dp[i][j] = dp[i - 1][j];
			if (j >= w[i]) {
				dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
			}
		}
	}
	int ans = 0;
	for (int j = 0; j <= s; j++) {
		ans = dp[n][j];
	}
	cout << ans;
	
	
	
	return 0;
}
