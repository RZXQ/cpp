#include<bits/stdc++.h>
using namespace std;

struct node {
    int x, y;
    int step;
};

queue<node> q;
int mp[101][101], vis[101][101];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int n;

void bfs() {
    node a = {1, 1, 0};
    vis[1][1] = 1;
    q.push(a);
    while (q.empty() != 1) {
        node f = q.front();
        if (mp[f.x][f.y] == 2) {
            cout << f.step;
            return;
        }
        for (int i = 0; i < 4; i++) {
            int nx = f.x + dx[i];
            int ny = f.y + dy[i];
            if (nx < 1 || nx > n || ny < 1 || ny > n || mp[nx][ny] == 1) continue;
            if (vis[nx][ny] == 0) {
                vis[nx][ny] = 1;
                node r = {nx, ny, f.step + 1};
                q.push(r);
            }
            //			if(nx>0&&nx<=n && ny>0 &&ny<=n &&vis[nx][ny]==0&& mp[nx][ny]==0){
            //				vis[nx][ny]=1;
            //				node r = {nx,ny,f.step+1};
            //				q.push(r);
            //			}
        }
        q.pop();
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
