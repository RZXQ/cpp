#include<bits/stdc++.h>
using namespace std;
int dp[510][510]; //dp[i][j]表示消除字符串[i,j]最少消除次数
int a[510]; //n个整数
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    //初始化
    for (int i = 1; i <= n; i++) //长度1
        dp[i][i] = 1;
    for (int i = 1; i < n; i++) {
        //长度2
        if (a[i] == a[i + 1]) dp[i][i + 1] = 1;
        else dp[i][i + 1] = 2;
    }
    //状态转移
    for (int len = 3; len <= n; len++) {
        //遍历长度
        for (int i = 1; i + len - 1 <= n; i++) {
            //遍历起点
            int j = i + len - 1; //计算终点

            if (a[i] == a[j])
                dp[i][j] = dp[i + 1][j - 1];
            else
                dp[i][j] = min(dp[i + 1][j] + 1, dp[i][j - 1] + 1);

            //字符串[i,j]由2个回文串并列拼接
            for (int k = i; k < j; k++) {
                //遍历分割点
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j]);
            }
        }
    }
    cout << dp[1][n]; //输出结果
    return 0;
}
