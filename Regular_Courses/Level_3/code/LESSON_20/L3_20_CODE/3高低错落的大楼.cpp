#include<bits/stdc++.h>
using namespace std;
int a[1001], dp[1001], n;

int main() {
    //输入
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    //初始化
    for (int i = 1; i <= n; i++) {
        dp[i] = 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i - 1; j >= 1; j--) {
            //状态转移
            if (a[j] < a[i]) dp[i] = max(dp[i], dp[j] + 1);
            else break;
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) ans = max(ans, dp[i]);
    //输出结果
    cout << ans;
    return 0;
}
