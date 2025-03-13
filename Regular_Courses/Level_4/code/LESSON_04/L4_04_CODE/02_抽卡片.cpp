//#include <cstdio>
//#include <cstring>
//#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
long long dp[110][110], a[110];

int main() {
    int n; //卡片数量
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int len = 3; len <= n; len++) {
        for (int i = 1; i + len - 1 <= n; i++) {
            int j = i + len - 1;
            dp[i][j] = 1e9;
            for (int k = i + 1; k < j; k++)
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + a[i] * a[k] * a[j]);
        }
    }
    cout << dp[1][n] << endl;
    return 0;
}
