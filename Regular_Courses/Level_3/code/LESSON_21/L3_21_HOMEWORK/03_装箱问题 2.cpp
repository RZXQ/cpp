#include<bits/stdc++.h>
using namespace std;
int dp[20001];
int a[1501];

int main() {
    int v, n;
    cin >> v >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++) {
        for (int j = v; j >= a[i]; j--) {
            dp[j] = max(dp[j], dp[j - a[i]] + a[i]);
        }
    }
    cout << v - dp[v];
    return 0;
}
