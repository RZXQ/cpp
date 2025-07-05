#include<bits/stdc++.h>
using namespace std;
int ans, e; //ans路线总数,e终点
int n, m; //n个结点,m条边
int g[7][7]; //邻接矩阵
int vis[7]; //标记数组
void dfs(int x) {
    //当前结点x
    if (x == e) {
        ans++;
        return;
    }
    for (int i = 1; i <= n; i++) {
        //优先小编号
        if (g[x][i] == 1 && vis[i] == 0) {
            vis[i] = 1; //标记
            dfs(i); //递进
            vis[i] = 0; //解除标记
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
    cin >> e; //终点
    vis[1] = 1; //标记起点
    dfs(1);
    cout << ans;
    return 0;
}
