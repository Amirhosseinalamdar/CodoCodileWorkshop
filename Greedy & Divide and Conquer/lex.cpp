#include <iostream>

using namespace std;

int main() {
    string s, t;
    cin >> s;
    int cnt[26] = {};
    for (char c : s) {
        cnt[c - 'a']++;
    }
    int p = 0;
    for (int i = 25; i >= 0; i--) {
        while (cnt[i]) {
            if (s[p] - 'a' == i) {
                t.push_back('a' + i);
            }
            cnt[s[p] - 'a']--;
            p++;
        }
    }
    cout << t << '\n';
    return 0;
}
