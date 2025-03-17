#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
long long dp[200005] = {0};
long long n, c, b, a;

long long dfs(long long x) {
    if (x <= c) return 1;
    if (dp[x] != 0) return dp[x]; // �����ֱֵ�ӷ���
    return dp[x] = (dfs(x - a) % mod + dfs(x - b) % mod) % mod;
}

int main() {
    cin >> n >> a >> b >> c;
    cout << dfs(n);
    return 0;
}
