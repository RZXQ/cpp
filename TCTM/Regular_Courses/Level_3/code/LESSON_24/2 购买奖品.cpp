#include<bits/stdc++.h>
using namespace std;
int v[501], w[501], s[501]; //v价格,w价值,s数量
int dp[501][6001];
int n, m; //奖品种数,总金额
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> v[i] >> w[i] >> s[i];
    }
    //状态转移
    for (int i = 1; i <= n; i++) {
        //奖品
        for (int j = 1; j <= m; j++) {
            //金额
            int num = min(s[i], j / v[i]); //最大购买数量
            for (int k = 0; k <= num; k++)
                dp[i][j] = max(dp[i][j], dp[i - 1][j - k * v[i]] + k * w[i]);
        }
    }
    cout << dp[n][m];
    return 0;
}
