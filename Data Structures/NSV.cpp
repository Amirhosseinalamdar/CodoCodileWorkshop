#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    int nsv[n];
    stack<int> st;
    for(int i = 0; i < n; i++){
        while(!st.empty() && a[st.top()] >= a[i]) {
            st.pop();
        }
        if(st.empty()){
            nsv[i] = 0;
        } else {
            nsv[i] = st.top() + 1;
        }
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<nsv[i]<<" ";
    }
    return 0;
}