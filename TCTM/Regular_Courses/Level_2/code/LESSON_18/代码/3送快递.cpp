#include<bits/stdc++.h>
using namespace std;
char mp[11][11]; //mp:地图
int vis[11][11], n; //vis:标记数组 n是地图大小
bool flag = false; //初始化为未到达目标状态
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1}; //下右上左
void dfs(int x, int y) {
    if (x == n && y == n) {
        flag = true; //标记能到达右下角
        return;
    }
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx > 0 && nx <= n && ny > 0 && ny <= n && vis[nx][ny] == 0 && mp[nx][ny] == '.') {
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
    vis[1][1] = 1; //标记(1,1)已搜索
    dfs(1, 1); //从(1,1)位置开始搜索
    if (flag) cout << "YES";
    else cout << "NO";
    return 0;
}
