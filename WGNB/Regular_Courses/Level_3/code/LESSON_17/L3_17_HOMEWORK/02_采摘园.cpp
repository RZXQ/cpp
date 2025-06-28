#include<bits/stdc++.h>
using namespace std;

struct node {
    int x, y;
};

queue<node> q; //队列
int mp[60][60]; //地图
int vis[60][60]; //标记
int dx[4] = {1, 0, -1, 0}; //下右上左
int dy[4] = {0, 1, 0, -1};
int sx, sy, n, m, ans;

void bfs() {
    node a = {sx, sy};
    vis[sx][sy] = 1;
    q.push(a);
    ans = 1;
    while (q.empty() != 1) {
        node f = q.front();
        for (int i = 0; i < 4; i++) {
            int nx = f.x + dx[i], ny = f.y + dy[i];
            if (nx > 0 && nx <= n && ny > 0 && ny <= m && mp[nx][ny] == 1 && vis[nx][ny] == 0) {
                vis[nx][ny] = 1;
                node r = {nx, ny};
                q.push(r);
                ans++;
            }
        }
        q.pop();
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mp[i][j];
            if (mp[i][j] == 6) {
                sx = i;
                sy = j;
            }
        }
    }
    bfs();
    cout << ans;
    return 0;
}
