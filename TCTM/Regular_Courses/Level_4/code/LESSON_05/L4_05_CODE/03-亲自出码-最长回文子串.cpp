#include<bits/stdc++.h>
using namespace std;
bool dp[10010][10010]; //dp[i][j]标记子串[i,j]回文
int main() {
    string s;
    cin >> s;
    int l = s.size(); //总长度
    int ans = 1; //结果默认1
    for (int i = 0; i < l; i++) //1个字符：都回文
        dp[i][i] = 1;
    for (int i = 0; i < l - 1; i++) {
        //2个字符：当字符相同时回文
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = 1;
            ans = 2; //更新结果
        }
    }
    for (int len = 3; len <= l; len++) {
        //长度从3开始遍历
        for (int i = 0; i + len - 1 < l; i++) {
            //起点
            int j = i + len - 1; //终点
            if (s[i] == s[j] && dp[i + 1][j - 1]) {
                //状态转移
                dp[i][j] = 1; //标记回文
                ans = max(ans, len); //更新结果
            }
        }
    }
    cout << ans; //输出结果
    return 0;
}
