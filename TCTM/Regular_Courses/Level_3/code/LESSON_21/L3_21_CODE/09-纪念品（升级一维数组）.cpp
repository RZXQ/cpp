#include<bits/stdc++.h>
using namespace std;
int dp[10001]; //dp[j]表示本金j时的最大利润
int p[101][101]; //p[i][j]表示第i天第j种纪念品价格
int main() {
    int t, n, m; //t天,n种纪念品,初始本金m枚金币
    cin >> t >> n >> m;
    for (int i = 1; i <= t; i++)
        for (int j = 1; j <= n; j++)
            cin >> p[i][j];
    for (int k = 1; k < t; k++) {
        //遍历今天的范围1~t-1
        for (int i = 1; i <= n; i++) {
            //纪念品
            for (int j = p[k][i]; j <= m; j++) {
                //本金
                dp[j] = max(dp[j], dp[j - p[k][i]] + (p[k + 1][i] - p[k][i]));
            }
        }
        m = m + dp[m]; //下一周期本金=上一周期本金+最大利润
        memset(dp, 0, sizeof(dp)); //将dp数组重置0
    }
    cout << m;
    return 0;
}
