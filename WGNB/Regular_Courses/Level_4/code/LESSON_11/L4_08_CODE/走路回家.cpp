#include<bits/stdc++.h>
using namespace std;
int n, k; //n:地图大小  k:k次转弯
char mp[51][51];
int vis[51][51][3][4]; //当前点 方向 转弯次数
int dfs(int x, int y, int f, int c) {
    if (c - 1 > k) return 0; //次数用完了
    if (mp[x][y] == 'H') return 0; //不能走
    if (x < 1 || x > n || y < 1 || y > n) return 0; //越界
    if (vis[x][y][f][c] != 0) return vis[x][y][f][c];
    if (x == n && y == n) {
        return 1;
    }
    int sum = 0;
    sum += dfs(x, y + 1, 1, f == 1 ? c : c + 1); //1表示向右走
    sum += dfs(x + 1, y, 2, f == 2 ? c : c + 1); //2表示向下走
    vis[x][y][f][c] = sum;
    return sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        memset(vis, 0, sizeof(vis));
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                cin >> mp[i][j];
        cout << dfs(1, 1, 0, 0) << endl; //(1,1)开始点 当前方向 0次转弯
    }
    return 0;
}
