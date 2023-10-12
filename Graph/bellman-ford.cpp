#include <bits/stdc++.h>
using namespace std;

const int maxn = 3000;
const int inf = 1e9;

#define F first
#define S second

int n, m;
pair<pair<int, int>, int> e[maxn];

int d[maxn];

int main(){
	
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int v, u, w;
		cin >> v >> u >> w;
		e[i] = {{v, u}, w};
	}
	int s;
	cin >> s;
	
	fill(d, d + n + 1, inf);
	d[s] = 0;
	
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < m; j++){
			int v = e[j].F.F, u = e[j].F.S, w = e[j].S; // v -> u
			d[u] = min(d[u], d[v] + w);
		}
	}
	bool dor_manfi = 0;
	for(int j = 0; j < m; j++){
		int v = e[j].F.F, u = e[j].F.S, w = e[j].S;
		if(d[u] > d[v] + w) dor_manfi = 1;
	}
	cout << "!!! " << dor_manfi << "\n";
	
	for(int i = 1; i <= n; i++){
		cout << i << ": " << d[i] << "\n";
	}
	
	return 0;
}
