#include<bits/stdc++.h>
using namespace std;
int a[100005];
int n, k;

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        double x;
        cin >> x;
        a[i] = x;
    }
    int L = 1, R = 1000000 * 100;
    int ans = 0;
    int mid;
    while (L <= R) {
        mid = (L + R) / 2;
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            cnt += a[i] / mid;
        }
        if (cnt < k) {
            R = mid - 1;
        } else {
            ans = mid;
            L = mid + 1;
        }
    }
    cout << ans;
    return 0;
}
