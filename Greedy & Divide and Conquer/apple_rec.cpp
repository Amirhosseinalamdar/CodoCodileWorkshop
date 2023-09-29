#include <iostream>

using namespace std;

const int N = 22;

int a[N], n;
long long ans = 1e9;

void solve(int i, long long diff) {
    if (i == n) {
        ans = min(ans, abs(diff));
        return;
    }
    solve(i + 1, diff + a[i]);
    solve(i + 1, diff - a[i]);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    solve(0, 0);
    cout << ans << '\n';
    return 0;
}
