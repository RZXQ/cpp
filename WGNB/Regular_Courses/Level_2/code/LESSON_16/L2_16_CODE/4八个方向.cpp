#include<bits/stdc++.h>
using namespace std;
int mp[11][11], vis[11][11], n; //mp:地图 vis:标记数组 n:n*n的地图
bool flag = false; //能否找到宝箱
int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1}; //右,右下,下,左下,左,上,右上
int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1}; //右,右下,下,左下,左,上,右上
void dfs(int x, int y) {
    if (mp[x][y] == 2) {
        flag = true;
        return;
    }
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx > 0 && nx <= n && ny > 0 && ny <= n && vis[nx][ny] == 0 && mp[nx][ny] != 1) {
            vis[nx][ny] = 1;
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cin >> mp[i][j];
    }
    vis[1][1] = 1; //标记(1,1)房间已搜索
    dfs(1, 1); //从(1,1)位置开始向周围搜索
    if (flag) cout << "YES";
    else cout << "NO";
    return 0;
}
