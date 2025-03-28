#include <bits/stdc++.h>
using namespace std;
int n, a[5], sum[5], dp[5][5];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum[i] += sum[i - 1] + a[i];
    }
    for (int len = 2; len <= n; len++) {
        //区间长度
        for (int i = 1; i + len - 1 <= n; i++) {
            //区间起点
            int j = i + len - 1; //区间终点
            dp[i][j] = 1e9;
            for (int k = i; k < j; k++) {
                //上一步分割点
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + (sum[j] - sum[i - 1]));
            }
        }
    }
    cout << dp[1][n];
    return 0;
}
