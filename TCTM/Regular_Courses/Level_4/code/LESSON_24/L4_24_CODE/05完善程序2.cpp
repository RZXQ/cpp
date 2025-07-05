#include<bits/stdc++.h>
using namespace std;
int dp[10010][2], ans1, ans2;

vector<int> get_div(int x) {
    vector<int> res;
    for (int i = 1; i <= x / i; i++) {
        if (x % i == 0) {
            res.push_back(i);
            if (x / i != i) res.push_back(x / i);
        }
    }
    sort(res.begin(), res.end());
    return res;
}

void solve(vector<int> &v) {
    memset(dp, 0, sizeof dp);
    dp[0][0] = 0, dp[0][1] = 1;
    ans1 = 0, ans2 = 0;
    for (int i = 1; i < v.size(); i++) {
        int a = v[i];
        for (int j = 0; i > j; j++) {
            int b = v[j];
            if (a % b == 0 && dp[j][0] + 1 > dp[i][0]) {
                dp[i][0] = dp[j][0] + 1;
                dp[i][1] = dp[j][1];
            } else if (a % b == 0 && dp[j][0] + 1 == dp[i][0]) {
                dp[i][1] += dp[j][1];
            }
        }
        if (dp[i][0] > ans1) {
            ans1 = dp[i][0];
            ans2 = dp[i][1];
        }
    }
    cout << ans1 << " " << ans2 << endl;
}

int main() {
    int n = 0;
    cin >> n;
    vector<int> v = get_div(n);
    solve(v);
    return 0;
}
