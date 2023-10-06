#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    multiset<int> s;
    for(int i=0;i<n;i++){
        int h;
        cin>>h;
        s.insert(h);
    }
    for(int i=0;i<m;i++){
        int t;
        cin>>t;
        if(s.empty() || s.upper_bound(t) == s.begin()){
            cout<<-1<<'\n';
            continue;
        }
        auto it = s.upper_bound(t);
        it --;
        cout<<*it<<'\n';
        s.erase(it);
    }
    return 0;
}