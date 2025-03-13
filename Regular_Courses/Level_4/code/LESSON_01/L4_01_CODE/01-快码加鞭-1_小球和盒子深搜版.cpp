#include <bits/stdc++.h>
using namespace std;
//int box[10];
int vis[10];
int n;
int cnt = 0;

void dfs(int x) {
    if (x == n + 1) {
        cnt++;
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (vis[i] == 0) {
            if (i == x) continue;
            //box[x] = i;
            vis[i] = 1;
            dfs(x + 1);
            vis[i] = 0;
        }
    }
}

int main() {
    cin >> n;
    dfs(1);
    cout << cnt;

    return 0;
}
