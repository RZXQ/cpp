#include<bits/stdc++.h>
using namespace std;
int vis[10], box[10], a[10]; //vis:标记数组 box:盒子
int n;

bool cmp(int x, int y) {
    return x > y;
}

void dfs(int x) {
    if (x == n + 1) {
        for (int i = 1; i <= n; i++) {
            cout << box[i] << ' ';
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= n; i++) {
        //尝试放置数字1~n
        if (vis[i] == 0) {
            box[x] = a[i]; //把i放到x号盒子
            vis[i] = 1;
            dfs(x + 1);
            vis[i] = 0;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + 1 + n, cmp);
    dfs(1); //第一个盒子开始
    return 0;
}
