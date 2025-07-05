#include<bits/stdc++.h>
using namespace std;

struct node {
    int x;
    int step;
};

int g[51][51]; //邻接矩阵
int n, m, h; //n棵树,m组能瞬移的树,妖怪所在的树
int vis[51]; //标记数组
queue<node> q;

void bfs() {
    vis[1] = 1;
    node a = {1, 0};
    q.push(a);
    while (q.empty() != 1) {
        node f = q.front();
        if (f.x == h) {
            //找到目标
            if (f.step <= 10) cout << "yes";
            else cout << "no";
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
    int a, b;
    for (int i = 1; i <= m; i++) {
        cin >> a >> b;
        g[a][b] = 1;
        g[b][a] = 1;
    }
    cin >> h;
    bfs();
    return 0;
}
