#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    stack<bool> st;
    for (char c : s) {
        bool b = c == '+';
        if (!st.empty() && b == st.top()) {
            st.pop();
        } else {
            st.push(b);
        }
    }
    if (st.empty()) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
}
