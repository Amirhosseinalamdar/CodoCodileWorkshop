#include <bits/stdc++.h>
using namespace std;

const int maxn = 300;
const int inf = 1e9;

int n, m;

int d[maxn][maxn];

int main(){
	
	for(int i = 0; i < maxn; i++){
		for(int j = 0; j < maxn; j++){
			d[i][j] = inf;
		}
		d[i][i] = 0;
	}
	
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int v, u, w;
		cin >> v >> u >> w;
		d[v][u] = min(d[v][u], w);
		//d[u][v] = min(d[u][v], w);
	}
	
	for(int k = 1; k <= n; k++){
		for(int v = 1; v <= n; v++){
			for(int u = 1; u <= n; u++){
				d[v][u] = min(d[v][u], d[v][k] + d[k][u]);
			}
		}
	}
	
	bool dor_manfi = 0;
	for(int i = 1; i <= n; i++){
		if(d[i][i] < 0){
			dor_manfi = 1;
			cout << "! " << i << "\n";
		}
	}
	cout << "!!! " << dor_manfi << "\n";
	
	return 0;
}
