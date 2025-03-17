#include<bits/stdc++.h>
using namespace std;
int dp[31][201]; //背包
int w[31], v[31], s[31];

int main() {
    int m, n;
    cin >> m >> n; //背包 物品种类
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i] >> s[i];
    }
    for (int i = 1; i <= n; i++) {
        if (s[i] == 0) {
            //完全背包
            for (int j = 1; j <= m; j++) {
                if (j >= w[i])
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - w[i]] + v[i]);
                else
                    dp[i][j] = dp[i - 1][j];
            }
        } else if (s[i] == 1) {
            //01背包
            for (int j = 1; j <= m; j++) {
                if (j >= w[i])
                    dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
                else
                    dp[i][j] = dp[i - 1][j];
            }
        } else {
            //多重背包
            for (int j = 1; j <= m; j++) {
                for (int k = 0; k <= min(j / w[i], s[i]); k++) {
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i] * k] + v[i] * k);
                }
            }
        }
    }
    cout << dp[n][m];
    return 0;
}
