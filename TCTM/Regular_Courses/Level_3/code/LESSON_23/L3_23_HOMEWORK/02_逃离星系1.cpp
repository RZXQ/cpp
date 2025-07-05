#include<bits/stdc++.h>
using namespace std;

struct Node {
    int x; //编号
    int step; //步数
};

Node q[51];
int front = 0, rear = 0;
bool vis[51] = {}; //标记数组
int g[51][51] = {}; //邻接矩阵
int n, m; //n个星球m个航道
int h; //终点
void bfs() {
    //1. 起点入队
    Node a = {1, 0};
    q[rear++] = a;
    vis[1] = 1; //标记
    while (front < rear) {
        //队列非空
        //2. 检查：是否到终点
        Node b = q[front];
        if (b.x == h) {
            //飞船每移动1步需要2分钟
            if (b.step <= 5) cout << "YES" << endl;
            else cout << "NO";
            return;
        }
        //3. 扩展新结点
        for (int i = 1; i <= n; i++) {
            if (g[b.x][i] != 0 && vis[i] == 0) {
                Node c = {i, b.step + 1};
                q[rear++] = c;
                vis[i] = 1;
            }
        }
        front++;
    }
    cout << "NO";
}

int main() {
    cin >> n >> m;
    int x, y;
    for (int i = 1; i <= m; i++) {
        cin >> x >> y;
        g[x][y] = 1;
        g[y][x] = 1;
    }
    cin >> h;
    bfs();
    return 0;
}
