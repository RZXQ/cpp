#include<bits/stdc++.h>
using namespace std;
int a[10001], b[10001]; //采每种草药的时间,价值
long long dp[10000001]; //dp[j]表示时间j的最大价值
int main() {
    int m, n; //总时间，草药种数
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
    }
    for (int i = 1; i <= n; i++) {
        //草药
        for (int j = a[i]; j <= m; j++) {
            //正序遍历时间
            dp[j] = max(dp[j], dp[j - a[i]] + b[i]);
        }
    }
    cout << dp[m];
    return 0;
}
