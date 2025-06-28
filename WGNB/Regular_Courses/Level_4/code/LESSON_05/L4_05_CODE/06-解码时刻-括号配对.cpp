#include<bits/stdc++.h>
using namespace std;
int dp[110][110]; //dp[i][j]表示字符串[i,j]为GBE最少增加字符数
int main() {
    string s;
    cin >> s;
    int l = s.size();
    //初始化
    for (int i = 0; i < l; i++) //长度为1需添加1个字符
        dp[i][i] = 1;
    for (int i = 0; i < l - 1; i++) {
        //长度为2
        //		if((s[i]=='('&&s[i+1]==')' || s[i]=='['&&s[i+1]==']')){
        //			dp[i][i+1] = 0;
        //		}
        if (!(s[i] == '(' && s[i + 1] == ')' || s[i] == '[' && s[i + 1] == ']')) {
            dp[i][i + 1] = 2; //其他长度2的最优解为2
        }
    }
    for (int len = 3; len <= l; len++) {
        //遍历长度
        for (int i = 0; i + len - 1 < l; i++) {
            //遍历起点
            int j = i + len - 1; //计算终点
            //转移方程1：两端扩展
            if (s[i] == '(' && s[j] == ')' || s[i] == '[' && s[j] == ']')
                dp[i][j] = dp[i + 1][j - 1];
            else
                dp[i][j] = min(dp[i + 1][j] + 1, dp[i][j - 1] + 1);
            //转移方程2：小区间合并大区间
            for (int k = i; k < j; k++) {
                //遍历分割点
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j]);
            }
        }
    }
    cout << dp[0][l - 1]; //输出结果
    return 0;
}
