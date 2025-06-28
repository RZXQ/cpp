#include<bits/stdc++.h>
using namespace std;
int dp[210][210]; //dp[i][j]表示出租站i到j最少的租金
int main() {
    int n;
    cin >> n;
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            cin >> dp[i][j]; //首先用从起点直接到终点的租金，赋值dp
        }
    }
    //遍历长度3~n的所有区间（3个出租点）
    for (int len = 3; len <= n; len++) {
        //遍历长度
        for (int i = 1; i + len - 1 <= n; i++) {
            //遍历起点
            int j = i + len - 1; //计算终点

            for (int k = i + 1; k < j; k++) {
                //遍历分割点，范围i+1~j-1
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
            }
        }
    }
    cout << dp[1][n]; //输出结果
    return 0;
}
