#include<bits/stdc++.h>
using namespace std;

int main() {
    int t = 0, n = 0, m = 0;
    cin >> t;
    for (int x = 0; x < t; x++) {
        int dp[105][105] = {};
        //输入
        cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> dp[i][j];
            }
        }
        //动态规划解决最大路径值问题
        //遍历地图中每一个值
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                //上方和左方值比较后，较大值与当前位置值相加
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + dp[i][j];
            }
        }
        //输出结果
        cout << dp[n][m] << endl;
    }
    return 0;
}
