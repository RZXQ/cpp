#include <bits/stdc++.h>
using namespace std;
int n, a[110], sum[110], dp[110][110];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum[i] += sum[i - 1] + a[i];
    }
    //遍历区间长度
    for (int len = 2; len <= n; len++) {
        //遍历区间起点
        for (int i = 1; i + len - 1 <= n; i++) {
            int j = i + len - 1; //区间终点
            dp[i][j] = 1e9;
            //遍历分割点
            for (int k = i; k < j; k++) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + (sum[j] - sum[i - 1]));
            }
        }
    }
    cout << dp[1][n];
    return 0;
}
