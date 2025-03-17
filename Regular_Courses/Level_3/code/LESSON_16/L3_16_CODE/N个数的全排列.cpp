#include<bits/stdc++.h>
using namespace std;
int a[11], box[11], vis[11];
int n;

void dfs(int x) {
    if (x == n + 1) {
        for (int i = 1; i <= n; i++) {
            cout << box[i] << ' ';
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (vis[i] == 0) {
            box[x] = a[i];
            vis[i] = 1;
            dfs(x + 1);
            vis[i] = 0;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    dfs(1);
    return 0;
}
