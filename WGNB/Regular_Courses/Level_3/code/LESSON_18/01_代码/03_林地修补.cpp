#include <bits/stdc++.h>
using namespace std;

struct node {
    int x, y;
};

queue<node> q;
char mp[11][11];
int vis[11][11];
int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int n, sx, sy;
int ans;
char new_c, old_c;

void bfs() {
    node a = {sx, sy};
    q.push(a);
    vis[sx][sy] = 1;
    ans = 1;
    old_c = mp[sx][sy];
    mp[sx][sy] = new_c;
    while (q.empty() != 1) {
        node f = q.front();
        for (int i = 0; i < 8; i++) {
            int nx = f.x + dx[i], ny = f.y + dy[i];
            if (nx > 0 && nx <= n && ny > 0 && ny <= n && mp[nx][ny] == old_c && vis[nx][ny] == 0) {
                vis[nx][ny] = 1;
                node r = {nx, ny};
                q.push(r);
                ans++;
                mp[nx][ny] = new_c;
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
    //输入起始点位置，和替换字符
    cin >> sx >> sy >> new_c;
    bfs();
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << mp[i][j];
        }
        cout << endl;
    }
    cout << ans;


    return 0;
}
