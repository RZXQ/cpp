#include<bits/stdc++.h>
using namespace std;
int g[110][110]; //邻接矩阵
int n, m;
int vis1[110], vis2[110]; //标记
int path1[110], path2[110];
int k1, k2;
queue<int> q;

void dfs(int k) {
    //k结点编号
    for (int i = 1; i <= n; i++) {
        if (g[k][i] == 1 && vis1[i] == 0) {
            vis1[i] = 1;
            path1[++k1] = i;
            dfs(i);
        }
    }
}

void bfs(int x) {
    //1.起点入队
    q.push(x);
    vis2[x] = 1;
    while (q.empty() == 0) {
        //2.取队首元素
        int b = q.front();
        for (int i = 1; i <= n; i++) {
            if (g[b][i] == 1 && vis2[i] == 0) {
                vis2[i] = 1;
                path2[++k2] = i;
                q.push(i);
            }
        }
        q.pop();
    }
}

int main() {
    cin >> n >> m;
    int x, y;
    for (int i = 1; i <= m; i++) {
        cin >> x >> y;
        g[x][y] = 1;
        g[y][x] = 1;
    }
    for (int i = 1; i <= n; i++) {
        if (!vis1[i]) {
            path1[++k1] = i;
            vis1[i] = 1;
            dfs(i);
        }
    }
    //输出深度遍历
    for (int i = 1; i < k1; i++) cout << path1[i] << "-";
    cout << path1[k1] << endl;

    for (int i = 1; i <= n; i++) {
        if (!vis2[i]) {
            path2[++k2] = i;
            bfs(i);
        }
    }
    //输出广度遍历
    for (int i = 1; i < k2; i++) cout << path2[i] << "-";
    cout << path2[k2] << endl;
    return 0;
}
