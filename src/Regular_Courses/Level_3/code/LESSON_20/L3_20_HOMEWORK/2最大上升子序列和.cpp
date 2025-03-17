#include<bits/stdc++.h>
using namespace std;
int a[1010], dp[1010], n;

int main() {
    //输入
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        dp[i] = a[i];
        for (int j = 1; j < i; j++) {
            //状态转移
            if (a[j] < a[i]) dp[i] = max(dp[i], dp[j] + a[i]);
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, dp[i]);
    }
    //输出结果
    cout << ans;
    return 0;
}
