#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map <int,int> mp;
    for(int i=0;i<n;i++){
        if(mp[x - a[i]] != 0) {
            cout<<mp[x - a[i]]<<" "<<i+1<<'\n';
            return 0;
        }
        mp[a[i]] = i+1;
    }
    cout<<"IMPOSSIBLE"<<'\n';
    return 0;
}