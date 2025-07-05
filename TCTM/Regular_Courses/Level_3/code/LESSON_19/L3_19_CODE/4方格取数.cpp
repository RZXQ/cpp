#include <bits/stdc++.h>
using namespace std;
//n行m列
int n, m;
long long a[1005][1005], f[1005][1005][2];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    //初始化第0行、第n+1行
    for (int j = 1; j <= m; j++) {
        f[0][j][0] = -1e+11;
        f[n + 1][j][1] = -1e+11;
    }
    //初始化第1列
    f[0][1][0] = 0;
    for (int i = 1; i <= n; i++) {
        f[i][1][0] = a[i][1] + f[i - 1][1][0];
        f[i][1][1] = -1e+11;
    }
    //遍历格子图中的每列
    for (int j = 2; j <= m; j++) {
        //存储向下走累加和
        for (int i = 1; i <= n; i++) {
            //上方累加和         取左侧格子最大值
            f[i][j][0] = max(f[i - 1][j][0], max(f[i][j - 1][0], f[i][j - 1][1])) + a[i][j];
        }
        //存储向上走累加和
        for (int i = n; i; i--) {
            //下方累加和         取左侧格子最大值
            f[i][j][1] = max(f[i + 1][j][1], max(f[i][j - 1][0], f[i][j - 1][1])) + a[i][j];
        }
    }
    cout << f[n][m][0]; //输出结果
    return 0;
}
