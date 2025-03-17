#include<bits/stdc++.h>
using namespace std;
bool dp[10010][10010]; //dp[i][j]表示子串[i~j]是否回文
int main() {
    string s;
    cin >> s;
    int l = s.size(); //总长度
    int ans = l; //单字符回文数量
    //初始化,标记长度为1的回文
    for (int i = 0; i < l; i++) //1个字符回文
        dp[i][i] = 1;
    for (int i = 0; i < l - 1; i++) {
        //2个字符回文
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = 1;
            ans++; //记录回文子串数量
        }
    }
    //状态转移
    for (int len = 3; len <= l; len++) {
        //长度
        for (int i = 0; i + len - 1 < l; i++) {
            //起点
            int j = i + len - 1; //终点
            if (dp[i + 1][j - 1] && s[i] == s[j]) {
                dp[i][j] = 1; //标记回文
                ans++; //记录回文子串数量
            }
        }
    }
    cout << ans;
    return 0;
}
