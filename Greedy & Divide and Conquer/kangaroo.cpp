#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int l = 0, r = n / 2 + 1;
    while (r - l > 1) {
        int m = (r + l) / 2;
        bool f = 1;
        for (int i = 0; i < m; i++) {
            if (a[i] * 2 > a[n - m + i]) {
                f = 0;
            }
        }
        if (f) {
            l = m;
        } else {
            r = m;
        }
    }
    cout << n - l << '\n';
    return 0;
}
