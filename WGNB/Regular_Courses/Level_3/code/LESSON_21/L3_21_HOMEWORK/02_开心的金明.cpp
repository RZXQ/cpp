#include<bits/stdc++.h>
using namespace std;
int w[25], v[25], dp[25][30000];
int n, m;

int main() {
    cin >> n >> m; //n总钱数，m物品数量
    for (int i = 1; i <= m; i++) {
        cin >> v[i] >> w[i];
        w[i] *= v[i]; //重要度*money
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (j < v[i]) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v[i]] + w[i]);
            }
        }
    }
    cout << dp[m][n] << endl;
    return 0;
}
