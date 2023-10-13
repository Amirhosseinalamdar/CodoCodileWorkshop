#include <bits/stdc++.h>
using namespace std;

const int N = 10005, mod = 1000 * 1000 * 1000 + 7;

long long dp[N];

int main() {
	int n;
	cin >> n;
	
	dp[0] = 1;
	
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= i - 1; j++) {
			dp[i] += dp[j] * dp[i - j - 1];
			//dp[i] %= mod;
		}
	}
	
	cout << dp[n];
	
	return 0;
}
