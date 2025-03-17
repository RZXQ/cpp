#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];

int main() {
    // 输入数据
    string s1, s2;
    while (cin >> s1 >> s2) {
        //获取字符串长度
        int m = s1.size();
        int n = s2.size();
        //使字符串从下标1开始
        s1 = "#" + s1;
        s2 = "#" + s2;
        //状态转移
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (s1[i] == s2[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
                else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        //输出结果
        cout << dp[m][n] << endl;
    }
    return 0;
}
