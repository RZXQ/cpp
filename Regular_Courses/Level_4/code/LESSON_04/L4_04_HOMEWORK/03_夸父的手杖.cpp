#include <bits/stdc++.h>
using namespace std;
int n, a[410], sum[410], dpMin[410][410], dpMax[410][410];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[n + i] = a[i];
    }
    for (int i = 1; i <= 2 * n - 1; i++) {
        sum[i] = sum[i - 1] + a[i];
    }
    for (int len = 2; len <= n; len++) {
        //区间长度
        for (int i = 1; i + len - 1 <= 2 * n - 1; i++) {
            //区间起点
            int j = i + len - 1; //区间终点
            dpMin[i][j] = 1e9;
            for (int k = i; k < j; k++) {
                //遍历分割点
                dpMin[i][j] = min(dpMin[i][j], dpMin[i][k] + dpMin[k + 1][j] + (sum[j] - sum[i - 1]));
                dpMax[i][j] = max(dpMax[i][j], dpMax[i][k] + dpMax[k + 1][j] + (sum[j] - sum[i - 1]));
            }
        }
    }
    int Min = dpMin[1][n], Max = dpMax[1][n];
    for (int i = 1; i < n; i++) {
        Min = min(Min, dpMin[1 + i][n + i]);
        Max = max(Max, dpMax[1 + i][n + i]);
    }
    cout << Min << endl << Max;
    return 0;
}
