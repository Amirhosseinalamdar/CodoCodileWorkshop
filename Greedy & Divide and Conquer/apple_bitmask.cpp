#include <iostream>

using namespace std;

const int N = 22;

int a[N], n;
long long ans = 1e9;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < (1 << n); i++) {
        long long diff = 0;
        for (int j = 0; j < n; j++) {
            if ((i >> j) & 1) {
                diff += a[j];
            } else {
                diff -= a[j];
            }
        }
        ans = min(ans, abs(diff));
    }
    cout << ans << '\n';
    return 0;
}
