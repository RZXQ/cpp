#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    //创建邻接矩阵
    int g[21][21] = {};
    //矩阵全部赋极大值999
    for (int i = 0; i <= 20; i++)
        for (int j = 0; j <= 20; j++)
            g[i][j] = 999;
    int x, y, w;
    //循环m次：先输入一条边，再赋权值
    for (int i = 1; i <= m; i++) {
        cin >> x >> y >> w;
        g[x][y] = w;
        g[y][x] = w;
    }
    //输出矩阵
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << g[i][j] << " ";
        cout << endl;
    }
    return 0;
}
