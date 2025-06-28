#include<bits/stdc++.h>
using namespace std;
bool dp[500001];
int v[2001];

int main() {
    int n, m; //n:钱币数 m:手表数
    cin >> n >> m;
    int k = 0; //打包后的数量
    for (int i = 1; i <= n; i++) {
        int v1, s; //k:钱币的面额 s:张数
        cin >> v1 >> s;
        for (int j = 1; j <= s; j *= 2) {
            //2的幂次方数量进行打包
            v[++k] = v1 * j;
            s -= j; //去掉打包的数量
        }
        if (s) v[++k] = v1 * s;
    }
    dp[0] = 1; //能凑出0元
    for (int i = 1; i <= k; i++) {
        for (int j = 500000; j >= v[i]; j--) {
            if (dp[j - v[i]]) dp[j] = 1;
        }
    }
    for (int i = 1; i <= m; i++) {
        int t;
        cin >> t;
        if (dp[t]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
