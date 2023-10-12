#include <bits/stdc++.h>
using namespace std;

const int maxn = 2e5;

int n, m;
vector<int> g[maxn];
bool vis[maxn];
int dis[maxn];

int main(){
	
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int v, u;
		cin >> v >> u;
		g[v].push_back(u);
		g[u].push_back(v);
	}
	int s;
	cin >> s;
	
	fill(dis, dis + maxn, -1);
	
	queue<int> q;
	dis[s] = 0;
	vis[s] = 1;
	q.push(s);
	
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int u : g[v]){
			if(!vis[u]){
				dis[u] = dis[v] + 1;
				vis[u] = 1;
				q.push(u);
			}
		}
	}
	
	for(int i = 1; i <= n; i++){
		cout << dis[i] << " ";
	}
	cout << "\n";
	
	
	return 0;
}
