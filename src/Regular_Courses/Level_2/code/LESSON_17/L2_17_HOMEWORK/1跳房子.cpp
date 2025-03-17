#include<bits/stdc++.h>
using namespace std;
int mp[20][20];
int vis[20][20];
int n, m, ans;
int sx, sy;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

void dfs(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx > 0 && nx <= n && ny > 0 && ny <= m && mp[nx][ny] != 1 && vis[nx][ny] == 0) {
            vis[nx][ny] = 1;
            ans++;
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mp[i][j];
            if (mp[i][j] == 2) {
                sx = i;
                sy = j;
            }
        }
    }
    vis[sx][sy] = 1;
    ans = 1;
    dfs(sx, sy);
    cout << ans << endl;
    return 0;
}
