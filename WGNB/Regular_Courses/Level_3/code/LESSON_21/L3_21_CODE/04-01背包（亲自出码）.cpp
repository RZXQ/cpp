#include<bits/stdc++.h>
using namespace std;
int w[3501], v[12881]; //w重量，c价值
int dp[12881]; //dp[j]表示背包容量为j时的最大价值
int main() {
    int n, m; //n种物品，背包容量m
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        //物品
        for (int j = m; j >= w[i]; j--) {
            //逆序遍历容量
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }
    cout << dp[m];
    return 0;
}
