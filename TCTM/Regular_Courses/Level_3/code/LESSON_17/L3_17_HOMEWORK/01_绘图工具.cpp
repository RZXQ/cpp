#include<bits/stdc++.h>
using namespace std;

struct node {
    int x, y;
};

queue<node> q; //队列
char mp[6][6]; //地图
int vis[6][6]; //标记
int dx[8] = {1, 0, -1, 0, -1, 1, -1, 1}; //下右上左
int dy[8] = {0, 1, 0, -1, -1, 1, 1, -1};
int sx, sy; //起点
char new_c, old_c; //new给定字母 old原有字母
void bfs() {
    node a = {sx, sy};
    q.push(a);
    vis[sx][sy] = 1;
    old_c = mp[sx][sy]; //存储起点字母
    mp[sx][sy] = new_c; //更新起点为新字母
    while (q.empty() != 1) {
        //队列不为空
        node f = q.front();
        for (int i = 0; i < 8; i++) {
            int nx = f.x + dx[i], ny = f.y + dy[i];
            if (nx > 0 && nx <= 8 && ny > 0 && ny <= 8 &&
                //判断是否连通
                mp[nx][ny] == old_c && vis[nx][ny] == 0) {
                vis[nx][ny] = 1;
                a = {nx, ny};
                q.push(a);
                mp[nx][ny] = new_c; //更新当前位置为新字母
            }
        }
        q.pop(); //队首出队
    }
}

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> mp[i][j];
        }
    }
    cin >> sx >> sy >> new_c;
    bfs();
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << mp[i][j];
        }
        cout << endl;
    }
    return 0;
}
