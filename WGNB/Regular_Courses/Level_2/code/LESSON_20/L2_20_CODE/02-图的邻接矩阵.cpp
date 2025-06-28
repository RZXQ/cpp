#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    //创建邻接矩阵
    int g[21][21] = {};
    int x, y;
    //循环m次：先输入边的两端结点x和y，再赋值2次1
    for (int i = 1; i <= m; i++) {
        cin >> x >> y;
        g[x][y] = 1;
        g[y][x] = 1;
    }
    //输出邻接矩阵
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << g[i][j] << " ";
        cout << endl;
    }
    return 0;
}
