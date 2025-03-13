#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m; //图有n个结点；计算结点m的度
    cin >> n >> m;
    //创建并输入邻接矩阵
    int g[11][11] = {};
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> g[i][j];
    //第m行非0元素个数就是m的出度
    int c = 0;
    for (int i = 1; i <= n; i++) {
        if (g[m][i] != 0)
            c++;
    }
    //第m列非0元素个数就是m的入度
    int r = 0;
    for (int i = 1; i <= n; i++) {
        if (g[i][m] != 0)
            r++;
    }
    //度=出度+入度
    int d = c + r;
    cout << c << " " << r << " " << d;
    return 0;
}
