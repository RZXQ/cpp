#include<bits/stdc++.h>
using namespace std;
int n;
int box[10];
int vis[10];

void dfs(int x) {
    if (x == n + 1) {
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (vis[i] == 0) {
            vis[i] = 1;
            box[x] = i;
            for (int j = 1; j <= x; j++) {
                cout << box[j];
            }
            cout << endl;
            dfs(x + 1);
            vis[i] = 0;
        }
    }
}

int main() {
    cin >> n;
    dfs(1);

    return 0;
}
