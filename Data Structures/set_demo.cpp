#include <bits/stdc++.h>

using namespace std;

int main(){
    set<int> s;
    
    s.insert(1);
    s.insert(3);
    s.insert(3); // will not be inserted
    s.insert(5);
    s.insert(2);
    s.insert(8);
    cout<<"first element is: "<<*s.begin()<<'\n';
    cout<<"last element is: "<<*s.rbegin()<<'\n';
    cout<<"size of set: "<<s.size()<<'\n';
    
    int x = 3;
    if(s.find(x) != s.end()) {
        cout<<x<<" Exists!\n";
    } else {
        cout<<x<<" doesn't exist.\n";
    }
    
    s.erase(7); // won't do anything (because 7 doesn't exists)
    s.erase(2);
    s.erase(s.begin()); // you can erase with iterator as well
    cout<<"size of set after erase: "<<s.size()<<'\n';
    
    for(int element: s) { // this loops over all the elements in order
        cout<<element<<" ";
    }

    s.clear(); // removes all elements
    return 0;
}