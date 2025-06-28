#include<bits/stdc++.h>
using namespace std;
int a[21][21]; //存储路线数
int n, m; //n行m列的网格
int x, y; //奶酪的坐标
int main() {
    cin >> n >> m >> x >> y;
    //第n行只有1种走法
    for (int i = 1; i <= m; i++)
        a[n][i] = 1;
    //第1列只有1种走法
    for (int i = 1; i <= n; i++)
        a[i][1] = 1;
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 2; j <= m; j++) {
            a[i][j] = a[i][j - 1] + a[i + 1][j]; //递推关系
        }
    }
    cout << a[x][y]; //输出奶酪的路线数
    return 0;
}
