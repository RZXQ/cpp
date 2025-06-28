#include<bits/stdc++.h>
using namespace std;
bool dp[10010][10010]; //dp[i][j]标记子串[i,j]回文 (0非回文, 1回文)
int main() {
    string str;
    cin >> str;
    int l = str.size(); //总长度
    int ans = 1; //最大的长度
    for (int i = 0; i < l; i++) //1个字符：都回文
        dp[i][i] = 1;
    for (int i = 0; i < l - 1; i++) {
        //2个字符：当字符相同时回文
        if (str[i] == str[i + 1]) {
            dp[i][i + 1] = 1;
            ans = 2; //更新结果
        }
    }
    string s1 = str.substr(0, 1); //默认结果是下标0的字符
    for (int len = 3; len <= l; len++) {
        //长度从3开始遍历
        for (int i = 0; i + len - 1 < l; i++) {
            //起点
            int j = i + len - 1; //终点
            if (str[i] == str[j] && dp[i + 1][j - 1]) {
                //状态转移
                dp[i][j] = 1; //标记回文
                if (len > ans) {
                    s1 = str.substr(i, len);
                    ans = len;
                }
            }
        }
    }
    cout << s1;
    return 0;
}
