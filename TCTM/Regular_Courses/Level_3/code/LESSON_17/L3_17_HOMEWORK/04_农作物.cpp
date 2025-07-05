#include<bits/stdc++.h>
using namespace std;

struct node {
    int x, y;
};

queue<node> q; //队列
char mp[110][110]; //地图
int vis[110][110];
int dx[4] = {1, 0, -1, 0}; //下右上左
int dy[4] = {0, 1, 0, -1};
int n, m, ans;

void bfs(int i, int j) {
    node a = {i, j};
    vis[i][j] = 1;
    q.push(a);
    while (q.empty() != 1) {
        node f = q.front();
        for (int i = 0; i < 4; i++) {
            int nx = f.x + dx[i], ny = f.y + dy[i];
            if (nx > 0 && nx <= n && ny > 0 && ny <= m && mp[nx][ny] == 'R' && vis[nx][ny] == 0) {
                vis[nx][ny] = 1;
                node r = {nx, ny};
                q.push(r);
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
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (mp[i][j] == 'R' && vis[i][j] == 0) {
                bfs(i, j);
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}
