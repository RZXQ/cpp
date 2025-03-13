#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
int n;
string s;

int work(string s) {
    int len = s.size();
    if (!len) return 0;
    vector<vector<int> > dp(len, vector<int>(len, 0));
    for (int i = 0; i < len; i++) dp[i][i] = 1;
    for (int i = len - 1; i >= 0; i--) {
        for (int j = i + 1; j < len; j++) {
            if (s[i] == s[j]) dp[i][j] = dp[i + 1][j - 1] + 2;
            else dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
        }
    }
    return dp[0][len - 1];
}

int main() {
    cin >> s;
    s = s.substr(1);
    cout << work(s);
    return 0;
}
