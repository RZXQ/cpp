#include<bits/stdc++.h>
using namespace std;

struct node {
    int x, y;
};

queue<node> q; //队列
char mp[60][60]; //地图
int vis[60][60];
int dx[4] = {1, 0, -1, 0}; //下右上左
int dy[4] = {0, 1, 0, -1};
int n, ans, max1;

void bfs(int x, int y) {
    node a = {x, y};
    vis[x][y] = 1;
    q.push(a);
    ans = 1;
    while (q.empty() != 1) {
        node f = q.front();
        for (int i = 0; i < 4; i++) {
            int nx = f.x + dx[i], ny = f.y + dy[i];
            if (nx > 0 && nx <= n && ny > 0 && ny <= n && mp[nx][ny] == 'A' && vis[nx][ny] == 0) {
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
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> mp[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (mp[i][j] == 'B') {
                ans = 0;
                memset(vis, 0, sizeof(vis));
                bfs(i, j);
                if (max1 < ans) {
                    max1 = ans;
                }
            }
        }
    }
    cout << max1;
    return 0;
}
