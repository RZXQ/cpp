#include<bits/stdc++.h>
using namespace std;

int getTime(string s) {
    int xb = s.find(':'), h = 0, m = 0;
    for (int i = 0; i < xb; i++) h = h * 10 + s[i] - 48;
    for (int i = xb + 1; i < s.size(); i++) m = m * 10 + s[i] - 48;
    return h * 60 + m;
}

int dp[1005];
int w[10005], v[10005], s[10005];

int main() {
    int n;
    string st, ed;
    cin >> st >> ed >> n;
    int m = getTime(ed) - getTime(st);
    for (int i = 1; i <= n; i++) {
        scanf("%d%d%d", &w[i], &v[i], &s[i]);
    }
    for (int i = 1; i <= n; i++) {
        if (s[i] == 0) {
            //��ȫ����
            for (int j = w[i]; j <= m; j++) {
                dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
            }
        } else if (s[i] == 1) {
            for (int j = m; j >= w[i]; j--) {
                dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
            }
        } else {
            for (int j = m; j >= w[i]; j--) {
                for (int k = 1; k <= min(j / w[i], s[i]); k++) {
                    dp[j] = max(dp[j], dp[j - w[i] * k] + v[i] * k);
                }
            }
        }
    }
    cout << dp[m];
    return 0;
}
