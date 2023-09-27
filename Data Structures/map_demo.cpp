#include <bits/stdc++.h>

using namespace std;

int main(){
    map<string, int> mp;

    mp["CodoCodile"] = 1;
    mp["Temsah"] = -1;
    mp["CodoCodile"] += 100;
    mp["Test"] = 0;

    cout<<mp["CodoCodile"]<<'\n';
    cout<<"map size is: "<<mp.size()<<'\n';
    if(mp.find("Test") != mp.end()) {
        cout<<"YES\n";
    } else {
        cout<<"NO\n";
    }

    for(pair<string, int> element: mp) {
        cout<<element.first<<" : "<<element.second<<'\n';
    }
    return 0;
}