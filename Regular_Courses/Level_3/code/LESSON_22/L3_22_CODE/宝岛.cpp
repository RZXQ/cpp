#include<bits/stdc++.h>
using namespace std;
int dp[100001];
int w[101], v[101], s[101];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i] >> s[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = m; j >= w[i]; j--)
            for (int k = 1; k <= min(s[i], j / w[i]); k++)
                dp[j] = max(dp[j], dp[j - w[i] * k] + v[i] * k);
    }
    cout << dp[m];
    return 0;
}
