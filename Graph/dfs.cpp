#include <bits/stdc++.h>
using namespace std;

const int maxn = 2e5;

int n, m;
vector<int> g[maxn];
bool vis[maxn];

void dfs(int v){
	vis[v] = 1;
	for(int u : g[v]){
		if(!vis[u]){
			dfs(u);
		}
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
	
	cout << " --------------- \n";
	
	for(int i = 1; i <= n; i++){
		if(vis[i]) cout << i << " ";
	}
	cout << "\n";
	
	
	return 0;
}
