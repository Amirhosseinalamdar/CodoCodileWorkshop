#include <bits/stdc++.h>

using namespace std;

int main(){
    priority_queue<int> pq;

    pq.push(10);
    cout<<"current_top is "<<pq.top()<<'\n';
    pq.push(20);
    cout<<"current_top is "<<pq.top()<<'\n';
    pq.push(15);
    cout<<"current_top is "<<pq.top()<<'\n';
    pq.push(1);
    cout<<"current_top is "<<pq.top()<<'\n';
    pq.push(40);
    cout<<"current_top is "<<pq.top()<<'\n';
    
    cout<<"priority_queue size is "<<pq.size();
    
    while(!pq.empty()) {
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}