#include<bits/stdc++.h>
using namespace std;

struct node {
    int x, y;
    int step;
};

queue<node> q;
int n;
char mp[51][51];
int vis[51][51];
int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};

void bfs() {
    node a = {1, 1, 0};
    q.push(a);
    vis[1][1] = 1;
    while (q.empty() != 1) {
        node b = q.front();
        if (mp[b.x][b.y] == '$') {
            cout << b.step;
            return;
        }
        for (int i = 0; i < 5; i++) {
            int tx, ty;
            if (i < 4) {
                //前4种：相邻4个位置
                tx = b.x + dx[i];
                ty = b.y + dy[i];
            } else {
                //第5种移动方法：(x,y)->(2*x,2*y)
                tx = 2 * b.x;
                ty = 2 * b.y;
            }
            //			if(tx<1||tx>n||ty<1||ty>n||mp[tx][ty]=='*'){ 
            //				continue;
            //			}
            if (tx > 0 && tx <= n && ty > 0 && ty <= n && mp[tx][ty] == '.' && vis[tx][ty] == 0) {
                //未走过
                node c = {tx, ty, b.step + 1};
                q.push(c);
                vis[tx][ty] = 1;
            }
        }
        q.pop();
    }
    cout << -1;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            cin >> mp[i][j];
        }
    bfs();
    return 0;
}
