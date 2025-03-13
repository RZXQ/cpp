#include <bits/stdc++.h>
using namespace std;

struct node {
    int x;
    int y;
    int step;
};

queue<node> q;
int vis[51][51] = {};
int dx[4] = {-2, -2, 2, 2}, dy[4] = {-2, 2, 2, -2};
int n;
int sx, sy;
int ex, ey;

void bfs() {
    node a = {sx, sy, 0};
    q.push(a);
    vis[sx][sy] = 1;
    while (q.empty() != 1) {
        node f = q.front();
        if (f.x == ex && f.y == ey) {
            cout << f.step;
            return;
        }
        for (int i = 0; i < 4; i++) {
            int nx = f.x + dx[i];
            int ny = f.y + dy[i];
            if (nx > 0 && nx <= n && ny > 0 && ny <= n && vis[nx][ny] == 0) {
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
    cin >> sx >> sy >> ex >> ey;

    bfs();
    return 0;
}
