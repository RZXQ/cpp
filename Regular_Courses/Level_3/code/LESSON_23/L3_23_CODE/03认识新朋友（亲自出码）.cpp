#include<bits/stdc++.h>
using namespace std;
int n, e, k; //n位同学,e组好友,k号同学
int g[11][11]; //邻接矩阵
int ans; //ans总方案数
int vis[11]; //标记数组
void dfs(int x) {
    //当前同学x
    if (x == k) {
        ans++;
        return;
    }
    for (int i = 1; i <= n; i++) {
        //优先小学号
        if (g[x][i] == 1 && vis[i] == 0) {
            vis[i] = 1; //标记
            dfs(i); //递进
            vis[i] = 0; //解除标记
        }
    }
}

int main() {
    cin >> n >> e;
    int a, b; //一组好友学号
    for (int i = 1; i <= e; i++) {
        cin >> a >> b;
        g[a][b] = 1;
        g[b][a] = 1;
    }
    cin >> k;
    vis[3] = 1; //标记起点(3号)
    dfs(3);
    cout << ans;
    return 0;
}
