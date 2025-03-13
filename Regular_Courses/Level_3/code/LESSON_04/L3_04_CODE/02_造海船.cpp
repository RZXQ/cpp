#include<bits/stdc++.h>
using namespace std;
int a[100005];
int n, k;

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int l = 1, r = 100000000;
    int mid;
    int ans = 0;
    while (l <= r) {
        mid = (l + r) / 2;
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            cnt += a[i] / mid;
        }
        if (cnt < k) {
            r = mid - 1;
        } else {
            ans = mid;
            l = mid + 1;
        }
    }
    cout << ans;
    return 0;
}
