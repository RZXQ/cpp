#include<bits/stdc++.h>
using namespace std;
int mp[11][11], vis[11][11]; //mp:地图 vis:标记数组
int n, ans; //ans:统计找到宝箱的线路总数
int dx[4] = {1, 0, -1, 0}; //下右上左
int dy[4] = {0, 1, 0, -1}; //下右上左
void dfs(int x, int y) {
    if (mp[x][y] == 2) {
        ans++;
        return;
    }
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx > 0 && nx <= n && ny > 0 && ny <= n && mp[nx][ny] != 1 && vis[nx][ny] == 0) {
            vis[nx][ny] = 1;
            dfs(nx, ny);
            vis[nx][ny] = 0;
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
    cout << ans;
    return 0;
}

/*
6
1 0 0 0 1 0 
0 1 1 0 0 1 
1 1 0 0 1 0 
0 0 1 0 0 0 
2 0 0 0 1 1 
1 0 1 0 1 0 

*/
