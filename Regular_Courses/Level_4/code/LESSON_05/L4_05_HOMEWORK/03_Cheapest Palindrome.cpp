#include<bits/stdc++.h>
using namespace std;
int zeng[31], shan[31]; //zeng[i]增加字母i花费，shan[i]删除字母i花费
int dp[2010][2010]; //dp[i][j]表示字符串[i,j]回文的最小花费
int main() {
    int n, m; //n个不同字母，组成长度m的字符串
    string s;
    cin >> n >> m;
    cin >> s;
    int l = s.size(); //字符串长度
    char c;
    int x, y;
    for (int i = 1; i <= n; i++) {
        cin >> c >> x >> y;
        zeng[c - 'a'] = x;
        shan[c - 'a'] = y;
    }
    //初始化：长度1的字符串，自身回文，费用为0
    //dp数组创建在全局，已初始化

    //状态转移
    for (int len = 2; len <= l; len++) {
        //遍历长度
        for (int i = 0; i + len - 1 < l; i++) {
            //遍历起点
            int j = i + len - 1; //计算终点

            dp[i][j] = 1e9; //初始一个极大值，后面逐渐更新最小值

            if (s[i] == s[j]) {
                //两端字符相同
                dp[i][j] = dp[i + 1][j - 1];
            } else {
                dp[i][j] = min(dp[i][j], dp[i + 1][j] + zeng[s[i] - 'a']); //右侧添加左侧字符
                dp[i][j] = min(dp[i][j], dp[i][j - 1] + shan[s[j] - 'a']); //删除右侧字符
                dp[i][j] = min(dp[i][j], dp[i][j - 1] + zeng[s[j] - 'a']); //左侧添加右侧字符
                dp[i][j] = min(dp[i][j], dp[i + 1][j] + shan[s[i] - 'a']); //删除左侧字符
            }
        }
    }
    cout << dp[0][l - 1]; //输出结果
    return 0;
}
