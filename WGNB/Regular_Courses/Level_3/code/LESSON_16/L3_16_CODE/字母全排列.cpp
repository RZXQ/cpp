#include<bits/stdc++.h>
using namespace std;
int vis[7];
char box[7];
char c[7];
int n;

void dfs(int x) {
    if (x == n + 1) {
        for (int i = 1; i <= n; i++) {
            cout << box[i];
        }
        cout << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        //尝试放置字母
        if (vis[i] == 0) {
            //
            box[x] = c[i];
            vis[i] = 1;
            dfs(x + 1);
            vis[i] = 0;
        }
    }
}

int main() {
    cin >> c;
    n = strlen(c);
    dfs(1); //第一个格子
    return 0;
}
