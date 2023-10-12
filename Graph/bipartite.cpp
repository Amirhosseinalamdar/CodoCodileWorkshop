#include <bits/stdc++.h>
using namespace std;

const int maxn = 2e5;

int n, m;
vector<int> g[maxn];
bool vis[maxn];
int c[maxn];

bool ok = 1;

void dfs(int v){
	vis[v] = 1;
	for(int u : g[v]){
		if(!vis[u]){
			if(c[v] == 1) c[u] = 2;
			else c[u] = 1;
			dfs(u);
		}
		else if(c[v] == c[u]) ok = 0;
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
	
	for(int i = 1; i <= n; i++){
		if(vis[i]) continue;
		c[i] = 1;
		dfs(i);
	}
	
	if(!ok){
		cout << "No\n";
		return 0;
	}
	cout << "Yes\n";
	
	for(int i = 1; i <= n; i++){
		cout << c[i] << " ";
	}
	cout << "\n";
	
	
	return 0;
}
