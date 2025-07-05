#include <bits/stdc++.h>
using namespace std;
int a[100010], n, q;

int search(int x) {
    int l = 1, r = n, f = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == x) {
            f = mid;
            r = mid - 1;
        }
        if (a[mid] > x) {
            r = mid - 1;
        } else {
            if (a[mid] < x)
                l = mid + 1;
        }
    }
    cout << f << " ";
    l = 1, r = n, f = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == x) {
            f = mid;
            l = mid + 1;
        }
        if (x < a[mid])
            r = mid - 1;
        else {
            if (x > a[mid]) {
                l = mid + 1;
            }
        }
    }
    cout << f << endl;
}

int main() {
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    while (q--) {
        int x;
        cin >> x;
        search(x);
    }
    return 0;
}
