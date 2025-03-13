#include<bits/stdc++.h>
using namespace std;
int v[3501], m[12881]; //v货物体积，m重量
int dp[12881]; //dp[j]表示容量为j时的最大重量
int main() {
    int n, V; //n种物品,总容量V
    cin >> n >> V;
    for (int i = 1; i <= n; i++) {
        cin >> v[i] >> m[i];
    }
    for (int i = 1; i <= n; i++) {
        //货物
        for (int j = V; j >= v[i]; j--) {
            //逆序遍历
            dp[j] = max(dp[j], dp[j - v[i]] + m[i]);
        }
    }
    cout << dp[V];
    return 0;
}
