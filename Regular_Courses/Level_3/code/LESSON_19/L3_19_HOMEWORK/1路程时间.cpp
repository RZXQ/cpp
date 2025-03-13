#include<bits/stdc++.h>
using namespace std;
int a[31][31];
//动态规划解决路程最短时间问题
int Dp(int n, int m) {
    //遍历地图除首行、首列的每一个值
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= m; j++) {
            //上方和左方值比较后，较小值与当前位置值相加
            a[i][j] = min(a[i - 1][j], a[i][j - 1]) + a[i][j];
        }
    }
    //返回最终解
    return a[n][m];
}

int main() {
    int n = 0, m = 0;
    //输入
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    //初始化
    for (int i = 1; i < n; i++) {
        a[i + 1][1] += a[i][1];
    }
    for (int j = 1; j < m; j++) {
        a[1][j + 1] += a[1][j];
    }
    //输出结果
    cout << Dp(n, m);
    return 0;
}
