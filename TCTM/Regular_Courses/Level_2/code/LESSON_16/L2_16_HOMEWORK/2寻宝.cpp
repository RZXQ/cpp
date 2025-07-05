#include<iostream>
using namespace std;
char map[21][21]; //表示地图
int vis[21][21]; //表示是否走过 走过为1 没有走过为0 
int n, m, ans = 0; //ans表示 一共有多少种方法 
int g[4][2] = {-1, 0, 1, 0, 0, -1, 0, 1}; //上下左右 
bool flag = false;

void dfs(int x, int y) {
    if (map[x][y] == '*') {
        //找到宝箱  
        ans++;
        flag = true; //为真 说明找到宝箱 
        return;
    }
    for (int i = 0; i < 4; i++) {
        //向四个方向走 
        int nx = x + g[i][0];
        int ny = y + g[i][1];
        if (nx > 0 && nx <= n && ny > 0 && ny <= m && map[nx][ny] != '#' && vis[nx][ny] == 0) {
            vis[nx][ny] = 1;
            dfs(nx, ny);
            vis[nx][ny] = 0;
        }
    }
}

int main() {
    cin >> n >> m; //n行m列 
    int s, e; //‘@’所在的位置 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> map[i][j];
            if (map[i][j] == '@') {
                s = i;
                e = j;
            }
        }
    }
    vis[s][e] = 1;
    dfs(s, e);
    if (flag) cout << ans; //为真 说明找到宝箱 
    else cout << -1;
    return 0;
}
