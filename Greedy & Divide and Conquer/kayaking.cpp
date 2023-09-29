#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, ans = 1000;
    cin >> n;
    n *= 2;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i += 2) {
        for (int j = i + 1; j < n; j += 2) {
            int cost = 0;
            for (int k = 0; k < i; k += 2) {
                cost += abs(a[k] - a[k + 1]);
            }
            for (int k = i + 1; k < j; k += 2) {
                cost += abs(a[k] - a[k + 1]);
            }
            for (int k = j + 1; k < n; k += 2) {
                cost += abs(a[k] - a[k + 1]);
            }
            ans = min(ans, cost);
        }
    }
    cout << ans << '\n';
    return 0;
}
