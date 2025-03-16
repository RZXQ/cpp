#include<bits/stdc++.h>
using namespace std;
char mp[20][20]; //地图
int vis[20][20]; //标记数组
int n, m, ans; //n行m列 ans:统计可以到达的黑色瓷砖数量
int sx, sy; //(sx,sy)开始的位置
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1}; //下右上左
void dfs(int x, int y) {
    //从当前格子(x,y)开始深搜
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx > 0 && nx <= n && ny > 0 && ny <= m && mp[nx][ny] != '#' && vis[nx][ny] == 0) {
            vis[nx][ny] = 1; //标记已搜索
            ans++; //统计能到达的黑色瓷砖
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mp[i][j]; //读入地图数据
            if (mp[i][j] == '@') {
                sx = i;
                sy = j;
            }
        }
    }
    vis[sx][sy] = 1;
    ans = 1; //包括初始位置的瓷砖
    dfs(sx, sy);
    cout << ans << endl;
    return 0;
}

/*
6 5
....#.
.....#
......
#@...#
.#..#.

*/

vis [1]
[1]

=
1; //标记(1,1)格子已搜索
ans=
1; //记录搜索过的房间数量
dfs (

1
,
1
); //从(1,1)开始向周围搜索
cout
<<
ans
<<
endl;
