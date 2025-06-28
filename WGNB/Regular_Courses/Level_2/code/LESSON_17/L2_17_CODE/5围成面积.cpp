#include<bits/stdc++.h>
using namespace std;
int mp[11][11]; //地图
int vis[11][11]; //标记数组
int dx[4] = {1, 0, -1, 0}; //下右上左
int dy[4] = {0, 1, 0, -1}; //下右上左
void dfs(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx > 0 && nx < 11 && ny > 0 && ny < 11 && mp[nx][ny] == 0 && vis[nx][ny] == 0) {
            vis[nx][ny] = 1;
            dfs(nx, ny);
        }
    }
}

int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cin >> mp[i][j];
        }
    }
    dfs(1, 1); //例如：从(1,1)开始搜索
    int ans = 0; //统计有多少个0
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            if (mp[i][j] == 0 && vis[i][j] == 0) {
                ans++; //统计满足条件的格子
            }
        }
    }
    cout << ans;
    return 0;
}

/*
0 0 0 0 0 0 0 0 0 0
0 0 0 0 1 1 1 0 0 0
0 0 0 0 1 0 0 1 0 0
0 0 0 0 0 1 0 0 1 0
0 0 1 0 0 0 1 0 1 0
0 1 0 1 0 1 0 0 1 0
0 1 0 0 1 1 0 1 1 0
0 0 1 0 0 0 0 1 0 0
0 0 0 1 1 1 1 1 0 0
0 0 0 0 0 0 0 0 0 0

*/
