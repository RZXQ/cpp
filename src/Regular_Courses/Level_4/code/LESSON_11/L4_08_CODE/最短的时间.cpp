#include<bits/stdc++.h>
using namespace std;
int n, m, ans = 400000; //n*m地图 ans初始极大值(找最少时间)
int mp[21][21]; //地图信息
bool vis[21][21]; //标记数组
int sx, sy, ex, ey; //(sx,sy)开始点 (ex,ey)结束点
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1}; //下右上左
void dfs(int x, int y, int cnt) {
    if (cnt > ans) return; //剪枝
    if (x == ex && y == ey) {
        ans = min(ans, cnt);
        return;
    }
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 1 || nx > n || ny < 1 || ny > m) continue; //越界
        if (vis[nx][ny] == 0) {
            //在地图内且没有走过
            vis[nx][ny] = 1;
            dfs(nx, ny, cnt + mp[nx][ny]);
            vis[nx][ny] = 0;
        }
    }
}

int main() {
    cin >> n >> m;
    cin >> sx >> sy >> ex >> ey;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> mp[i][j];
    vis[sx][sy] = 1;
    dfs(sx, sy, mp[sx][sy]);
    cout << ans;
    return 0;
}

/*
4 4
1 1 4 4
1 6 6 6
15 7 6 6
15 3 6 6
15 15 1 1
25

3 4
2 2 3 3
1 1 1 1
1 5 10 1
1 15 5 1
15

3 3
1 1 3 3
1 10 7
3 99 13
10 20 1
32
*/
