#include<bits/stdc++.h>
using namespace std;
char mp[101][101]; //地图
int vis[101][101]; //标记数组
int n, m, ans; //n行m列 ans:统计有多少水洼
int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};

void dfs(int x, int y) {
    //从当前格子(x,y)开始深搜
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx > 0 && nx <= n && ny > 0 && ny <= m && mp[nx][ny] == 'W' && vis[nx][ny] == 0) {
            vis[nx][ny] = 1;
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> n >> m; //n行m列
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            cin >> mp[i][j];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (mp[i][j] == 'W' && vis[i][j] == 0) {
                vis[i][j] = 1; //标记已访问
                dfs(i, j);
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}

/*
7 9
W.......W
.WWW....W
....WW..W
........W
........W
..W.....W
.W.W....W
3
*/
