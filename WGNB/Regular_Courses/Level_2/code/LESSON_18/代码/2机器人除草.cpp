#include<bits/stdc++.h>
using namespace std;
int vis[11][11]; //vis标记数组
int dx[4] = {-1, 0, 1, 0}; //上右下左
int dy[4] = {0, 1, 0, -1}; //上右下左
int ans, n; //ans记录格子数 n地图行列数
int x, y; //x、y起点坐标
void dfs(int x, int y) {
    //从当前点(x,y)开始深度优先搜索
    if (ans == n * n) {
        cout << x << ' ' << y; //最后搜索的格子
        return;
    }
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx > 0 && nx <= n && ny > 0 && ny <= n && vis[nx][ny] == 0) {
            vis[nx][ny] = 1;
            ans++;
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> n >> x >> y; //输入地图大小、起点位置
    vis[x][y] = 1; //标记起点搜索过
    ans++; //起点计数
    dfs(x, y); //从起点开始搜索
    return 0;
}
