#include <bits/stdc++.h>

using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    cout<<"Front element is "<<q.front()<<" & Back element is "<<q.back()<<endl;
    q.push(2);
    cout<<"Front element is "<<q.front()<<" & Back element is "<<q.back()<<endl;
    q.push(3);
    cout<<"Front element is "<<q.front()<<" & Back element is "<<q.back()<<endl;
    q.push(5);
    cout<<"Front element is "<<q.front()<<" & Back element is "<<q.back()<<endl;
    cout<<"Size of the queue: "<<q.size()<<endl;
    while(!q.empty()) {
        cout<<"Front element is "<<q.front()<<" & Back element is "<<q.back()<<endl;
        q.pop();
    } // Note in case queue is empty, q.pop() & q.back() & q.front() will result in runtime error
    return 0;
}

