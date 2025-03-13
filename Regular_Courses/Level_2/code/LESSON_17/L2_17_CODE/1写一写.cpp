#include<bits/stdc++.h>
using namespace std;
int mp[5][5]; //地图
int vis[5][5]; //标记数组
int dx[4] = {1, 0, -1, 0}; //下右上左
int dy[4] = {0, 1, 0, -1};
int ans; //统计能到达的格子
void dfs(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx > 0 && nx < 5 && ny > 0 && ny < 5 && mp[nx][ny] == 0 && vis[nx][ny] == 0) {
            vis[nx][ny] = 1;
            ans++;
            dfs(nx, ny);
        }
    }
}

int main() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++)
            cin >> mp[i][j];
    }
    vis[1][1] = 1; //标记已搜索
    ans = 1; //记录搜索过房间数量
    dfs(1, 1);
    cout << ans << endl;
    return 0;
}

/*
0 0 1 0
1 0 1 1
1 0 1 1
1 1 1 0

0 0 0 0
0 0 0 0
0 0 0 0
0 0 0 0
*/
