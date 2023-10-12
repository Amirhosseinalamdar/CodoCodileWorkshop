#include <bits/stdc++.h>
using namespace std;

const int maxn = 2e5;
const int inf = 1e9;
const int mod = 1e9 + 7;

int n, m;
vector<pair<int, int> > g[maxn];
int dis[maxn];
bool vis[maxn];
int par[maxn];
int cnt[maxn];

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
	
	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q;
	
	cnt[s] = 1;
	dis[s] = 0;
	q.push({dis[s], s});
	
	while(!q.empty()){
		int v = q.top().second;
		q.pop();
		if(vis[v]) continue;
		vis[v] = 1;
		for(auto i : g[v]){
			int u = i.first, w = i.second;
			if(dis[u] > dis[v] + w){
				par[u] = v;
				dis[u] = dis[v] + w;
				q.push({dis[u], u});
				cnt[u] = 0;
			}
			if(dis[u] == dis[v] + w){
				cnt[u] = (cnt[u] + cnt[v]) % mod;
			}
		}
	}
	
	for(int i = 1; i <= n; i++){
		cout << i << " : " << dis[i] << " * " << cnt[i] << "\n";
	}
	
	
	return 0;
}
