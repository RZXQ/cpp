#include<bits/stdc++.h>
using namespace std;
int dp[210][210], a[210];

int main() {
    int n; //n颗珠子
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[n + i] = a[i]; //将序列调整为2*n
    }
    for (int len = 3; len <= n + 1; len++) {
        for (int i = 1; i + len - 1 <= 2 * n; i++) {
            int j = i + len - 1;
            for (int k = i + 1; k < j; k++)
                dp[i][j] = max(dp[i][j], dp[i][k] + dp[k][j] + a[i] * a[k] * a[j]);
        }
    }
    //遍历所有长度为n+1的区间段的最优解
    int Max = dp[1][n + 1];
    for (int i = 1; i < n; i++) {
        Max = max(Max, dp[1 + i][n + 1 + i]);
    }
    cout << Max << endl;
    return 0;
}
