#include <bits/stdc++.h>
using namespace std;

struct node {
    int x;
    int y;
    int step;
};

queue<node> q;
int vis[101][101] = {};
int dx[8] = {-2, -2, -1, 1, 2, 2, 1, -1}, dy[8] = {-1, 1, 2, 2, 1, -1, -2, -2};
int n, m;
int ex1, ey1, ex2, ey2;
int A, B;
bool flag1 = false, flag2 = false;

void bfs() {
    node a = {1, 1, 0};
    q.push(a);
    vis[1][1] = 1;
    while (q.empty() != 1) {
        node f = q.front();
        if (f.x == ex1 && f.y == ey1) {
            A = f.step;
            flag1 = true;
        }
        if (f.x == ex2 && f.y == ey2) {
            B = f.step;
            flag2 = true;
        }
        if (flag1 == true && flag2 == true) return;
        for (int i = 0; i < 8; i++) {
            int nx = f.x + dx[i];
            int ny = f.y + dy[i];
            if (nx > 0 && nx < 101 && ny > 0 && ny < 101 && vis[nx][ny] == 0) {
                vis[nx][ny] = 1;
                node r = {nx, ny, f.step + 1};
                q.push(r);
            }
        }
        q.pop();
    }
}

int main() {
    cin >> ex1 >> ey1 >> ex2 >> ey2;
    bfs();
    cout << A << endl << B;
    return 0;
}
