#include<bits/stdc++.h>
using namespace std;
int p[10001], t[10001];
int dp[10001];

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        cin >> p[i] >> t[i];
    }
    for (int i = 1; i <= n; i++) {
        //题目
        for (int j = t[i]; j <= m; j++) {
            //时间
            dp[j] = max(dp[j], dp[j - t[i]] + p[i]);
        }
    }
    cout << dp[m];
    return 0;
}
