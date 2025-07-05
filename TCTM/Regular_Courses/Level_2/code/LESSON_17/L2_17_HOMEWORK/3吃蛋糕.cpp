#include<iostream>
using namespace std;
char mp[101][101];
int vis[101][101];
int n, m;
//上右下左
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int ans;

void dfs(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int nx = dx[i] + x;
        int ny = dy[i] + y;
        if (nx > 0 && nx <= n && ny > 0 && ny <= m && mp[nx][ny] == '#' && vis[nx][ny] == 0) {
            vis[nx][ny] = 1;
            dfs(nx, ny);
        }
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
            if (mp[i][j] == '#' && vis[i][j] == 0) {
                ans++;
                vis[i][j] = 1;
                dfs(i, j);
            }
        }
    }
    cout << ans;


    return 0;
}
