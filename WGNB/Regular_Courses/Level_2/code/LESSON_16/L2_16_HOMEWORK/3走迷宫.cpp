#include<iostream>
using namespace std;
char mp[101][101];
int vis[101][101];
int n, ans;
int sx, sy, ex, ey;
bool flag = false;

void dfs(int x, int y) {
    if (x == ex && y == ey) {
        flag = true;
        return;
    }
    if (x >= 0 && x < n && y >= 0 && y < n) {
        //地图内
        if (vis[x][y] == 0 && mp[x][y] == '.') {
            vis[x][y] = 1;
            dfs(x + 1, y); //下
            dfs(x, y + 1); //右
            dfs(x - 1, y); //上
            dfs(x, y - 1); //左
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> mp[i][j];
    }
    cin >> sx >> sy >> ex >> ey;
    dfs(sx, sy);
    if (flag) cout << "yes";
    else cout << "no";
    return 0;
}
