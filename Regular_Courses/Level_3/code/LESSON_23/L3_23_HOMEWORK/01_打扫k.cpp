#include<bits/stdc++.h>
using namespace std;
int ans, k; //ans路线总数,k终点
int n, e; //n个结点,e条边
int g[11][11]; //邻接矩阵
int vis[11]; //标记数组
void dfs(int x) {
    //当前结点x
    if (x == k) {
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
    cin >> n >> e;
    int a, b;
    for (int i = 1; i <= e; i++) {
        cin >> a >> b;
        g[a][b] = 1;
        g[b][a] = 1;
    }
    cin >> k;
    vis[1] = 1; //标记起点
    dfs(1);
    cout << ans;
    return 0;
}
