#include<bits/stdc++.h>
using namespace std;
int a[100005];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int L = 1, R = 100000000;
    int mid;
    int ans = 0;
    while (L <= R) {
        mid = (L + R) / 2;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cnt += a[i] / mid;
        }
        if (cnt >= m) {
            ans = mid;
            L = mid + 1;
        } else {
            R = mid - 1;
        }
    }
    cout << ans;
    return 0;
}
