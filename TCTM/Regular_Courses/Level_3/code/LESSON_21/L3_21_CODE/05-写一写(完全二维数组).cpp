#include<bits/stdc++.h>
using namespace std;
int w[5] = {0, 2, 3, 7, 4}; //物品重量
int v[5] = {0, 1, 3, 9, 5}; //物品价值
int dp[5][11]; //行表示物品编号，列表示容量
int main() {
    for (int i = 1; i <= 4; i++) {
        //物品编号
        for (int j = 1; j <= 10; j++) {
            //容量
            if (j < w[i])
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - w[i]] + v[i]);
        }
    }
    cout << dp[4][10];
    return 0;
}
