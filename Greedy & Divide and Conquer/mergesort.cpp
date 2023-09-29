#include <iostream>

using namespace std;

void mmerge(int* l1, int* r1, int* l2, int* r2, int* dest) {
    int a[r1 - l1 + r2 - l2], p = 0;
    for (; l1 < r1; l1++) {
        while (l2 < r2 && *l2 < *l1) {
            a[p++] = *(l2++);
        }
        a[p++] = *l1;
    }
    while (l2 < r2) {
        a[p++] = *(l2++);
    }
    for (int i = 0; i < p; i++) {
        dest[i] = a[i];
    }
}

void msort(int* l, int* r) {
    if (r - l == 1) return;
    int* m = l + (r - l) / 2;
    msort(l, m);
    msort(m, r);
    mmerge(l, m, m, r, l);
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    msort(a, a + n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
    return 0;
}
