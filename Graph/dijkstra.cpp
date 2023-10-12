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
	
	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q;
	
	dis[s] = 0;
	q.push({dis[s], s});
	
	while(!q.empty()){
		int v = q.top().second;
		q.pop();
		if(vis[v]) continue;
		cout << "! " << v << " " << dis[v] << "\n";
		vis[v] = 1;
		for(auto i : g[v]){
			int u = i.first, w = i.second;
			if(dis[u] > dis[v] + w){
				dis[u] = dis[v] + w;
				q.push({dis[u], u});
			}
		}
	}
	
	
	return 0;
}
