#include<bits/stdc++.h>
using namespace std;
int n, m; //n个结点,m条边
int g[7][7]; //邻接矩阵
int vis[7]; //标记数组
void dfs(int x) {
    //当前结点x
    cout << x << " ";
    for (int i = 1; i <= n; i++) {
        //优先小编号
        if (g[x][i] == 1 && vis[i] == 0) {
            vis[i] = 1; //标记
            dfs(i); //递进
        }
    }
}

int main() {
    cin >> n >> m;
    int x, y; //结点x和y
    for (int i = 1; i <= m; i++) {
        cin >> x >> y;
        g[x][y] = 1;
        g[y][x] = 1;
    }
    vis[1] = 1; //标记起点
    dfs(1);
    return 0;
}
