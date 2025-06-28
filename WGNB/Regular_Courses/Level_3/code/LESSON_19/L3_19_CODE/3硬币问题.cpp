#include<bits/stdc++.h>
using namespace std;
int n, a[3] = {1, 5, 11}, dp[1000010];

int main() {
    cin >> n;
    memset(dp, 1, sizeof(dp));
    dp[0] = 0;
    for (int j = 0; j < 3; j++) {
        for (int i = a[j]; i <= n; i++) {
            dp[i] = min(dp[i], dp[i - a[j]] + 1);
        }
    }
    cout << dp[n];
    return 0;
}
