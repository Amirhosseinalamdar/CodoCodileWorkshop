#include <bits/stdc++.h>
using namespace std;

const int N = 100 * 1000 + 5;

bool mark[N];
int dp0[N];
int dp1[N];
vector <int> adj[N];

void dfs(int v) {
	mark[v] = true;
	vector <int> chld;
	for (auto u : adj[v]) {
		if (!mark[u]) {
			dfs(u);
			chld.push_back(u);
			dp0[v] += dp1[u];
		}
	}
	dp1[v] = dp0[v];
	for (auto u : chld) {
		dp1[v] = max(dp1[v], dp0[v] - dp1[u] + dp0[u] + 1);
	}
	
}

int main() {
	int n;
	cin >> n;
	for (int i = 1; i < n; i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1);
	cout << dp1[1];
	
	return 0;
}
