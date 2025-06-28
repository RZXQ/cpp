#include<bits/stdc++.h>
using namespace std;
int dp[31][20001];
int a[31];

int main() {
    int v, n;
    cin >> v >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= v; j++) {
            if (j < a[i])
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - a[i]] + a[i]);
        }
    }
    cout << v - dp[n][v];
    return 0;
}
