#include<bits/stdc++.h>
using namespace std;
int dp[100005];
int w[100001], v[100001];

int main() {
    int n, m;
    cin >> n >> m;
    int k = 0;
    for (int i = 1; i <= n; i++) {
        int w1, v1, s1;
        cin >> w1 >> v1 >> s1;
        for (int j = 1; j <= s1; j *= 2) {
            w[++k] = w1 * j;
            v[k] = v1 * j;
            s1 -= j;
        }
        if (s1) {
            w[++k] = w1 * s1;
            v[k] = v1 * s1;
        }
    }
    for (int i = 1; i <= k; i++) {
        for (int j = m; j >= w[i]; j--) {
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }
    cout << dp[m];
    return 0;
}
