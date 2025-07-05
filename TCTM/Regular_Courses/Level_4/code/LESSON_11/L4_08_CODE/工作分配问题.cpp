#include<bits/stdc++.h>
using namespace std;
int mp[21][21];
int box[21], vis[21];
int n, ans;

void dfs(int x, int t, int res) {
    //x号人 t:当前收益 res:剩下任务的最大可能受益总和
    if (x == n + 1) {
        ans = max(ans, t);
        return;
    }
    res -= box[x];
    for (int i = 1; i <= n; i++) {
        if (vis[i] == 0) {
            //判断i项工作是否有人选
            int n = t + mp[x][i];
            if (n + res < ans) continue;
            vis[i] = 1;
            dfs(x + 1, n, res);
            vis[i] = 0;
        }
    }
}

int main() {
    cin >> n;
    int res = 0;
    for (int i = 1; i <= n; i++) {
        int max1 = 0;
        for (int j = 1; j <= n; j++) {
            cin >> mp[i][j];
            max1 = max(max1, mp[i][j]);
        }
        box[i] = max1;
        res += max1;
    }
    dfs(1, 0, res);
    cout << ans;
    return 0;
}
