#include <bits/stdc++.h>

using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<"Top element is: "<<st.top()<<endl;
    cout<<"Size of the stack: "<<st.size()<<endl;
    while(!st.empty()) {
        cout<<st.top()<<endl;
        st.pop();
    } // Note in case queue is empty, q.pop() & q.back() & q.front() will result in runtime error
    return 0;
}