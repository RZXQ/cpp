#include<bits/stdc++.h>
using namespace std;
int n, k;
int h[100005];
int w[100005];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> h[i] >> w[i];
    int l = 1, r = 100000;
    int mid;
    int ans = 0;
    while (l <= r) {
        mid = (l + r) / 2;
        int s = 0;
        for (int i = 0; i < n; i++) s += (h[i] / mid) * (w[i] / mid);
        if (s < k) {
            //验证并调整范围
            r = mid - 1;
        } else {
            ans = mid;
            l = mid + 1;
        }
    }
    cout << ans;
    return 0;
}
