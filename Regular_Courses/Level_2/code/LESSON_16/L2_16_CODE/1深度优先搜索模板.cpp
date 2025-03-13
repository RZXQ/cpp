#include<bits/stdc++.h>
using namespace std;
int vis[4][4]; //标记数组
int ans; //统计搜索过的房间数量
int dx[4] = {1, 0, -1, 0}; //下右上左
int dy[4] = {0, 1, 0, -1}; //下右上左
void dfs(int x, int y) {
    if (ans == 9) {
        //递归边界条件
        cout << x << ',' << y; //最后搜索的房间
        return;
    }
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx > 0 && nx <= 3 && ny > 0 && ny <= 3 && vis[nx][ny] == 0) {
            vis[nx][ny] = 1; //标记已搜索
            ans++; //累加搜索过房间数量
            dfs(nx, ny); //从(nx,ny)继续搜索
        }
    }
}

int main() {
    vis[1][2] = 1; //标记(1,2)房间搜索过
    ans++; //搜索过1个房间
    dfs(1, 2); //从(1,2)开始搜索
    return 0;
}
