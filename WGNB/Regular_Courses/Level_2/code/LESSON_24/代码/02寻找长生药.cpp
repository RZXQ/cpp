#include<bits/stdc++.h>
using namespace std;

struct node {
    int x, y;
};

queue<node> q; //队列
int vis[51][51]; //标记数组
int dx[4] = {1, 0, -1, 0}; //下右上左
int dy[4] = {0, 1, 0, -1};
char mp[51][51]; //地图
int n; //n*n的地图
void bfs() {
    node a = {1, 1};
    q.push(a);
    vis[1][1] = 1;
    while (q.empty() != 1) {
        //队列不为空
        node f = q.front();
        if (mp[f.x][f.y] == '@') {
            cout << "YES";
            return;
        }
        for (int i = 0; i < 4; i++) {
            int nx = f.x + dx[i], ny = f.y + dy[i];
            if ((nx >= 1 && nx <= n && ny >= 1 && ny <= n) && vis[nx][ny] == 0 && mp[nx][ny] != '#') {
                vis[nx][ny] = 1; //标记
                node r = {nx, ny};
                q.push(r); //新点入队
            }
        }
        q.pop(); //队首出队
    }
    cout << "NO";
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> mp[i][j];
        }
    }
    if (mp[1][1] == '#') {
        cout << "NO";
        return 0;
    }
    bfs();
    return 0;
}
