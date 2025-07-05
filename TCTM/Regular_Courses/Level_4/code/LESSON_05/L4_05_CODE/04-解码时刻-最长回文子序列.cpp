#include<bits/stdc++.h>
using namespace std;
int dp[1010][1010]; //dp[i][j]表示字符串[i,j]中最长回文子序列的长度
int main() {
    string s;
    cin >> s;
    int l = s.size();
    int ans = 1; //结果默认1
    for (int i = 0; i < l; i++) //长度1的字符串：dp[i][i]=1
        dp[i][i] = 1;
    for (int i = 0; i < l - 1; i++) {
        //长度2的字符串
        if (s[i] == s[i + 1]) {
            //两字符相同：最长回文子序列长度2
            dp[i][i + 1] = 2;
            ans = 2; //更新结果
        } else {
            //两字符不同：最长回文子序列长度1
            dp[i][i + 1] = 1;
        }
    }
    for (int len = 3; len <= l; len++) {
        //长度
        for (int i = 0; i + len - 1 < l; i++) {
            //起点
            int j = i + len - 1; //终点
            if (s[i] == s[j]) {
                //两端字符相同：中间字符串的最优解+2
                dp[i][j] = dp[i + 1][j - 1] + 2;
            } else {
                //两端字符不同：max(排除左端字符最优解,排除右端字符最优解)
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
            }
        }
    }
    cout << dp[0][l - 1] << endl; //输出结果
    return 0;
}
