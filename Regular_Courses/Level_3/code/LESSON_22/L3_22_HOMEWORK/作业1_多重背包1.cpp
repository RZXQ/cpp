#include<bits/stdc++.h>
using namespace std;
int dp[205];
int v[101], w[101], s[101];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i] >> s[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = m; j >= w[i]; j--) {
            for (int k = 0; k <= min(j / w[i], s[i]); k++) {
                dp[j] = max(dp[j], dp[j - k * w[i]] + v[i] * k);
            }
        }
    }
    cout << dp[m];
    return 0;
}
