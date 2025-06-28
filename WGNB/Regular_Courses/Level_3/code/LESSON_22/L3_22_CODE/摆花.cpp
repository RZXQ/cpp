#include<bits/stdc++.h>
using namespace std;
int dp[101][101];
int a[101];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 0; i <= n; i++)
        dp[i][0] = 1; //摆放0盆花为1种方案
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            for (int k = 0; k <= min(j, a[i]); k++) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - k]) % 1000007;
            }
        }
    }
    cout << dp[n][m];
    return 0;
}
