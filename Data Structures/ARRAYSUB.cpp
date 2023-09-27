#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    deque<int> dq;
    for(int i=0;i<k-1;i++){
        while(!dq.empty() && a[dq.back()] <= a[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for(int i=k-1;i<n;i++){
        while(!dq.empty() && a[dq.back()] <= a[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        if(dq.front() <= i-k) {
            dq.pop_front();
        }
        cout<<a[dq.front()]<<" ";
    }
    return 0;
}