#include<iostream>
using namespace std;
char mp[20][20];
bool vis[20][20];
int n, m;
bool flag = false;
//上右下左
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int x, int y) {
    if (mp[x][y] == '*') {
        flag = true;
        return;
    }
    for (int i = 0; i < 4; i++) {
        int nx = dx[i] + x;
        int ny = dy[i] + y;
        if (nx > 0 && nx <= n && ny > 0 && ny <= m) {
            if (mp[nx][ny] != 'X' && vis[nx][ny] == 0) {
                vis[nx][ny] = 1;
                dfs(nx, ny);
            }
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
    if (mp[1][1] == 'X') {
        cout << "NO";
        return 0;
    }
    vis[1][1] = 1;
    dfs(1, 1);
    if (flag)cout << "YES";
    else cout << "NO";
    return 0;
}
