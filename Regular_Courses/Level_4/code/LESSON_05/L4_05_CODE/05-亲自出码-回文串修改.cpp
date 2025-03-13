#include<bits/stdc++.h>
using namespace std;
int dp[1010][1010]; //dp[i][j]表示字符串[i,j]回文所需的最少字符数
int main() {
    int n; //n组数据
    cin >> n;
    string s;
    for (int t = 1; t <= n; t++) {
        //多组数据
        cin >> s;
        int l = s.size(); //总长度
        //for(int i=0;i<l;i++) //长度为1时无需添加
        //	dp[i][i]=0;
        for (int i = 0; i < l - 1; i++) {
            //长度为2：字符相同时无需添加，否则添加1个
            //if(s[i]==s[i+1])
            //	dp[i][i+1] = 0;
            if (s[i] != s[i + 1])
                dp[i][i + 1] = 1;
        }
        for (int len = 3; len <= l; len++) {
            //长度
            for (int i = 0; i + len - 1 < l; i++) {
                //起点
                int j = i + len - 1; //终点
                if (s[i] == s[j]) //两端字符相同
                    dp[i][j] = dp[i + 1][j - 1];
                else //两端字符不同
                    dp[i][j] = min(dp[i + 1][j] + 1, dp[i][j - 1] + 1);
            }
        }
        cout << dp[0][l - 1] << endl; //输出结果
        memset(dp, 0, sizeof(dp)); //dp数组重新赋值0
    }
    return 0;
}
