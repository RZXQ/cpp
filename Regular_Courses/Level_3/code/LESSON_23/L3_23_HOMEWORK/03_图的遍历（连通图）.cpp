#include<bits/stdc++.h>
using namespace std;
int g[101][101]; //邻接矩阵
int n, m; //n个结点m条边
int vis1[101], vis2[101]; //vis1深搜标记,vis2广搜标记
int path1[110], path2[110];
int k1, k2;
queue<int> q;

void dfs(int x) {
    //深度遍历
    for (int i = 1; i <= n; i++) {
        //优先小编号
        //当前结点x和结点i相连，且未访问
        if (g[x][i] == 1 && vis1[i] == 0) {
            path1[++k1] = i;
            vis1[i] = 1; //标记
            dfs(i); //递进
        }
    }
}

void bfs() {
    //广度遍历
    vis2[1] = 1;
    q.push(1);
    while (q.empty() != 1) {
        int f = q.front();
        for (int i = 1; i <= n; i++) {
            if (g[f][i] == 1 && vis2[i] == 0) {
                path2[++k2] = i;
                vis2[i] = 1;
                q.push(i);
            }
        }
        q.pop();
    }
}

int main() {
    cin >> n >> m;
    int a, b; //一条边的两个结点
    for (int i = 1; i <= m; i++) {
        cin >> a >> b;
        g[a][b] = 1;
        g[b][a] = 1;
    }
    path1[++k1] = 1;
    vis1[1] = 1; //标记起点
    dfs(1);
    //输出深度遍历
    for (int i = 1; i < k1; i++) cout << path1[i] << "-";
    cout << path1[k1] << endl;

    path2[++k2] = 1;
    bfs();
    //输出广度遍历
    for (int i = 1; i < k2; i++) cout << path2[i] << "-";
    cout << path2[k2] << endl;
    return 0;
}
