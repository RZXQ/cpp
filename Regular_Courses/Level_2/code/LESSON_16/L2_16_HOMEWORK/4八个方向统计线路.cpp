#include<iostream>
using namespace std;
int mp[7][7] = {};
bool vis[7][7] = {};
//上、右上、右、右下、下、左下、左、左上
int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int ans = 0, n;

void dfs(int x, int y) {
    if (mp[x][y] == 2) {
        //找到宝箱
        ans++;
        return;
    }
    for (int i = 0; i < 8; i++) {
        //遍历当前房间的八个方向
        int nx = x + dx[i]; //下一个房间的行下标
        int ny = y + dy[i]; //下一个房间的列下标
        if (nx > 0 && nx <= n && ny > 0 && ny <= n) {
            //在迷宫内
            if (mp[nx][ny] != 1 && vis[nx][ny] == 0) {
                //房间没有蝙蝠与房间没有访问过
                vis[nx][ny] = 1; //当前房间标记访问过
                dfs(nx, ny); //重复上述步骤
                vis[nx][ny] = 0;
            }
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> mp[i][j];
        }
    }
    if (mp[1][1] == 1) {
        //入口有蝙蝠
        cout << 0;
        return 0;
    }
    vis[1][1] = 1; //起点标记走过
    dfs(1, 1); //深度优先搜索简称DFS
    cout << ans;
    return 0;
}
