#include <bits/stdc++.h>
using namespace std;

const int maxn = 2e5;
const int inf = 1e9;

int n, m;
vector<pair<int, int> > g[maxn];
int dis[maxn];
bool vis[maxn];

int main(){
	
	fill(dis, dis + maxn, inf);
	
	
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int v, u, w;
		cin >> v >> u >> w;
		g[v].push_back({u, w});
		g[u].push_back({v, w});
	}
	int s;
	cin >> s;
	
	dis[s] = 0;
	
	for(int o = 0; o < n; o++){
		int v = 0;
		for(int i = 1; i <= n; i++){
			if(!vis[i] && dis[i] < dis[v]) v = i;
		}
		cout << "! " << v << " " << dis[v] << "\n";
		vis[v] = 1;
		for(auto i : g[v]){
			int u = i.first, w = i.second;
			dis[u] = min(dis[u], dis[v] + w);
		}
	}
	
	
	return 0;
}
