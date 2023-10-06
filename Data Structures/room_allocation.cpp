#include <bits/stdc++.h>

#define pii pair<int,int>
#define F first
#define S second

using namespace std;

int main(){
    int n;
    cin>>n;
    pair<pair <int,int>, int> a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].first.first>>a[i].first.second;
        a[i].second = i;
    }
    sort(a, a+n);
    priority_queue <pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > people;
    priority_queue <int, vector<int>, greater<int> > rooms;
    for(int i=1;i<=n;i++){
        rooms.push(i);
    }
    int ans[n];
    int mx = 0;
    for(int i=0;i<n;i++){
        int arr = a[i].first.first, dep = a[i].first.second, ind = a[i].second;
        while(!people.empty() && people.top().first < arr) {
            rooms.push(people.top().second);
            people.pop();
        }
        ans[ind] = rooms.top();
        rooms.pop();
        people.push({dep, ans[ind]});
        mx = max(mx, int(people.size()));
    }
    cout<<mx<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}