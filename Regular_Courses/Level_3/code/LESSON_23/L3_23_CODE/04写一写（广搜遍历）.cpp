#include<bits/stdc++.h>
using namespace std;
int n, m; //n个结点,m条边
int g[7][7]; //邻接矩阵
int vis[7]; //标记数组
queue<int> q; //队列
void bfs() {
    vis[1] = 1;
    q.push(1); //起点入队
    while (q.empty() != 1) {
        //队列非空
        int f = q.front();
        for (int i = 1; i <= n; i++) {
            //优先小编号
            if (g[f][i] == 1 && vis[i] == 0) {
                cout << i << " ";
                vis[i] = 1;
                q.push(i);
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
    cout << 1 << " "; //输出起点
    bfs();
    return 0;
}
