#include<bits/stdc++.h>
using namespace std;

struct node {
    int x; //结点编号
    int step; //步数
};

int n, m, e; //n个结点,m条边,e终点
int g[7][7]; //邻接矩阵
int vis[7]; //标记数组
queue<node> q; //队列
void bfs() {
    vis[1] = 1;
    node a = {1, 0};
    q.push(a); //起点入队
    while (q.empty() != 1) {
        //队列非空
        node f = q.front();
        if (f.x == e) {
            cout << f.step;
            return;
        }
        for (int i = 1; i <= n; i++) {
            //优先小编号
            if (g[f.x][i] == 1 && vis[i] == 0) {
                vis[i] = 1;
                node b = {i, f.step + 1};
                q.push(b);
            }
        }
        q.pop();
    }
}

int main() {
    cin >> n >> m;
    int x, y; //两端结点x和y
    for (int i = 1; i <= m; i++) {
        cin >> x >> y;
        g[x][y] = 1; //边<x,y>
        g[y][x] = 1; //边<y,x>
    }
    cin >> e;
    bfs();
    return 0;
}
