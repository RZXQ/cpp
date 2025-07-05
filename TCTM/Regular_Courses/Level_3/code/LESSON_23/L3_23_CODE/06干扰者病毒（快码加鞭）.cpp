#include<bits/stdc++.h>
using namespace std;
int n, m;
int g[1010][1010]; //邻接矩阵
queue<int> q; //队列
int vis[1010]; //标记结点访问
int a[1010]; //标记病毒状态(0没放,1放)
int sum[2]; //sum[0]没放的数量;sum[1]放的数量
bool bfs(int x) {
    //从起点x开始广度遍历
    vis[x] = 1;
    q.push(x); //起点入队
    a[x] = 1; //起点放病毒
    sum[0] = 0, sum[1] = 1; //更新病毒数量
    while (!q.empty()) {
        int f = q.front(); //取队首
        for (int i = 1; i <= n; i++) {
            //遍历结点
            if (g[f][i] == 1 && vis[i] == 1) {
                //相连已访问
                if (a[f] == a[i]) //病毒状态相同
                    return 0; //无法满足要求
            } else if (g[f][i] == 1 && vis[i] == 0) {
                //相连未访问
                a[i] = 1 - a[f]; //设置相反病毒状态
                sum[a[i]]++; //记录数量
                vis[i] = 1;
                q.push(i);
            }
        }
        q.pop(); //出队
    }
    return 1; //满足要求
}

int main() {
    cin >> n >> m;
    int u, v;
    for (int i = 1; i <= m; i++) {
        cin >> u >> v;
        g[u][v] = 1; //无向边赋值2次
        g[v][u] = 1;
    }
    int ans = 0; //结果
    for (int i = 1; i <= n; i++) {
        if (vis[i]) continue; //跳过访遍历的结点
        if (bfs(i) == 0) {
            //图无法满足题意
            cout << "Impossible";
            return 0;
        } else //图满足题意
            ans += min(sum[0], sum[1]); //累加每个子图的最少病毒数量
    }
    cout << ans;
    return 0;
}
