#include<bits/stdc++.h>
using namespace std;
int mp[20][20], vis[20][20]; //mp:迷宫 vis:标记数组
int m, n, ex, ey; //m行n列 (ex,ey)到达点
bool flag = false;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1}; //下右上左
void dfs(int x, int y) {
    if (x == ex && y == ey) {
        flag = true;
        return;
    }
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx > 0 && nx <= m && ny > 0 && ny <= n && mp[nx][ny] == 0 && vis[nx][ny] == 0) {
            vis[nx][ny] = 1;
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> m >> n;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++)
            cin >> mp[i][j];
    }
    cin >> ex >> ey;
    if (mp[1][1] == 1 || mp[ex][ey] == 1) {
        cout << "NO";
        return 0;
    }
    vis[1][1] = 1; //标记(1,1)房间已搜索
    dfs(1, 1); //从(1,1)位置开始向周围搜索
    if (flag) cout << "YES";
    else cout << "NO";
    return 0;
}
