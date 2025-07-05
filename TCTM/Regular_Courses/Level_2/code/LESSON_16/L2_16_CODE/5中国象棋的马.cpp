#include<bits/stdc++.h>
using namespace std;
int mp[11][11], vis[11][11]; //mp:地图 vis:标记数组
int n, m, ex, ey; //n行m列 (ex,ey)到达点
bool flag = false;
int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

void dfs(int x, int y) {
    if (x == ex && y == ey) {
        flag = true;
        return;
    }
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx > 0 && nx <= n && ny > 0 && ny <= m && mp[nx][ny] == 0 && vis[nx][ny] == 0) {
            vis[nx][ny] = 1;
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            cin >> mp[i][j];
    }
    cin >> ex >> ey;
    vis[1][1] = 1; //标记(1,1)房间已搜索
    dfs(1, 1); //从(1,1)位置开始向周围搜索
    if (flag) cout << "YES";
    else cout << "NO";
    return 0;
}
