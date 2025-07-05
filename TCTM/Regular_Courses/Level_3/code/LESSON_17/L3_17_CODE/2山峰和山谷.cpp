#include<bits/stdc++.h>
using namespace std;

struct node {
    int x, y;
};

queue<node> q;
int mp[1001][1001]; //地图
bool vis[1001][1001]; //标记数组
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int n; //n行n列的迷宫
int sx, sy; //连通块起点
bool flag_high, flag_low;

void bfs() {
    node a = {sx, sy};
    vis[sx][sy] = 1;
    q.push(a);
    while (q.empty() != 1) {
        node f = q.front();
        for (int i = 0; i < 8; i++) {
            int nx = f.x + dx[i], ny = f.y + dy[i];
            if (nx > 0 && nx <= n && ny > 0 && ny <= n) {
                if (mp[nx][ny] > mp[sx][sy]) flag_high = 0;
                if (mp[nx][ny] < mp[sx][sy]) flag_low = 0;
                if (mp[nx][ny] == mp[sx][sy] && vis[nx][ny] == 0) {
                    vis[nx][ny] = 1;
                    a = {nx, ny};
                    q.push(a);
                }
            }
        }
        q.pop();
    }
}

int main() {
    int h_sum = 0, l_sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> mp[i][j];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (vis[i][j] == 0) {
                flag_high = 1, flag_low = 1;
                sx = i;
                sy = j;
                bfs();
                if (flag_high && !flag_low) h_sum++;
                if (!flag_high && flag_low) l_sum++;
                if (flag_high && flag_low) {
                    h_sum++;
                    l_sum++;
                }
            }
        }
    }
    cout << h_sum << " " << l_sum << endl;
    return 0;
}
