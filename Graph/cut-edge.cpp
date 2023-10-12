#include <bits/stdc++.h>
using namespace std;

const int maxn = 2e5;

int n, m;
vector<int> g[maxn];
bool vis[maxn];
int h[maxn];
int dp[maxn];

void dfs(int v, int p = -1){
	vis[v] = 1;
	dp[v] = n;
	for(int u : g[v]){
		if(!vis[u]){
			h[u] = h[v] + 1;
			dfs(u, v);
			dp[v] = min(dp[v], dp[u]);
			if(dp[u] >= h[u]){
				cout << "! " << v << " " << u << "\n";
			}
		}
		else if(u != p) dp[v] = min(dp[v], h[u]);
	}
}

int main(){
	
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int v, u;
		cin >> v >> u;
		g[v].push_back(u);
		g[u].push_back(v);
	}
	
	dfs(1);
	
	for(int i = 1; i <= n; i++){
		if(vis[i]) continue;
		h[i] = 0;
		dfs(i);
	}
	
	return 0;
}
