#include<bits/stdc++.h>
using namespace std;
int vis[10], a[10]; //vis:标记数组 a:盒子
int n;

void dfs(int x) {
    if (x == n + 1) {
        for (int i = 1; i <= n; i++) {
            cout << a[i] << ' ';
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= n; i++) {
        //尝试放置数字1~n
        if (vis[i] == 0) {
            a[x] = i; //把i放到x号盒子
            vis[i] = 1;
            dfs(x + 1);
            vis[i] = 0;
        }
    }
}

int main() {
    cin >> n;
    dfs(1); //第一个盒子开始
    return 0;
}
