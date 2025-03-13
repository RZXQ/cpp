#include <bits/stdc++.h>
using namespace std;

struct node {
    int x;
    int y;
    int step;
};

queue<node> q;
char mp[51][51] = {};
int vis[51][51] = {};
int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1}, dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int n;
int ex, ey;

void bfs() {
    node a = {1, 1, 0};
    vis[1][1] = 1;
    q.push(a);
    while (q.empty() != 1) {
        node f = q.front();
        if (f.x == ex && f.y == ey) {
            cout << f.step;
            return;
        }
        for (int i = 0; i < 8; i++) {
            int nx = f.x + dx[i];
            int ny = f.y + dy[i];
            if (nx > 0 && nx <= n && ny > 0 && ny <= n && mp[nx][ny] == '.' && vis[nx][ny] == 0) {
                vis[nx][ny] = 1;
                node r = {nx, ny, f.step + 1};
                q.push(r);
            }
        }
        q.pop();
    }
    cout << -1;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> mp[i][j];
        }
    }
    cin >> ex >> ey;

    bfs();
    return 0;
}
