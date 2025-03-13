#include<bits/stdc++.h>
using namespace std;

struct node {
    int x, y, step;
};

char mp[101][101];
int vis[101][101];
queue<node> q;
int n;
int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

void bfs() {
    node a = {1, 1, 0};
    q.push(a);
    while (!q.empty()) {
        node f = q.front();
        q.pop();
        if (mp[f.x][f.y] == '#') {
            cout << f.step;
            return;
        }
        for (int i = 0; i < 8; i++) {
            int nx = f.x + dx[i];
            int ny = f.y + dy[i];
            if (nx < 1 || nx > n || ny < 1 || ny > n || mp[nx][ny] == '1') continue;
            if (vis[nx][ny] == 0) {
                vis[nx][ny] = 1;
                node r = {nx, ny, f.step + 1};
                q.push(r);
            }
        }
    }
    cout << -1;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cin >> mp[i][j];
    }

    bfs();
    return 0;
}
