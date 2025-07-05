#include<bits/stdc++.h>
using namespace std;

struct node {
    int x, step; //x:下标 step:步数
} t, p;

queue<node> q;
int vis[205], mp[205]; //mp:存储楼层数字 vis:标记数组
int n, A, B; //n:层数 a:起始楼层 b:要到达楼层
void bfs() {
    node a = {A, 0}; //起始楼层数据
    vis[A] = 1; //起始楼层标记访问过
    q.push(a); //数据入队
    while (!q.empty()) {
        node f = q.front(); //获取队首数据
        q.pop(); //出队操作
        if (f.x == B) {
            //找到了，输出步数
            cout << f.step;
            return;
        }
        int nx = f.x + mp[f.x]; //向上移动
        if (nx > 0 && nx <= n && vis[nx] == 0) {
            //楼层存在 且没有访问过
            vis[nx] = 1;
            node r = {nx, f.step + 1};
            q.push(r);
        }
        nx = f.x - mp[f.x]; //向下移动
        if (nx > 0 && nx <= n && vis[nx] == 0) {
            //楼层存在 且 没有访问过
            vis[nx] = 1;
            node r = {nx, f.step + 1};
            q.push(r);
        }
    }
    cout << -1; //无法到达，输出-1
}

int main() {
    cin >> n >> A >> B;
    for (int i = 1; i <= n; i++) cin >> mp[i];
    bfs();
    return 0;
}
