#include<bits/stdc++.h>
using namespace std;

struct node {
    int x, y, step;
};

queue<node> q; //队列
char mp[25][25];
int vis[25][25];
int n, m, sx, sy; //n行m列 (sx,sy)rain所在的位置
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void bfs() {
    node a = {sx, sy, 0};
    q.push(a);
    vis[sx][sy] = 1;
    while (q.empty() != 1) {
        //队列不为空
        node f = q.front();
        q.pop();
        if (mp[f.x][f.y] == '*') {
            cout << f.step << endl;
            return;
        }
        for (int i = 0; i < 4; i++) {
            int nx = f.x + dx[i];
            int ny = f.y + dy[i];
            if (nx > 0 && nx <= n && ny > 0 && ny <= m && vis[nx][ny] == 0 && mp[nx][ny] != '#') {
                vis[nx][ny] = 1;
                node r = {nx, ny, f.step + 1};
                q.push(r);
            }
        }
    }
    cout << -1 << endl;
}

int main() {
    while (1) {
        cin >> n >> m;
        if (n == 0 && m == 0) break;
        for (int i = 0; i < 25; i++) {
            for (int j = 0; j < 25; j++) {
                vis[i][j] = 0;
            }
        }
        while (q.empty() != 1) {
            q.pop();
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> mp[i][j];
                if (mp[i][j] == '@') sx = i, sy = j; //记录坐标
            }
        }
        bfs();
    }
    return 0;
}
