#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[301] = {}; //每位同学的打水时间
    int n, r; //n位同学,r台饮水机
    cin >> n >> r;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    for (int i = r + 1; i <= n; i++) {
        a[i] = a[i] + a[i - r];
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += a[i];
    }
    cout << ans;
    return 0;
}
