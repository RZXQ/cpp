#include<bits/stdc++.h>
using namespace std;
int a[21], b[21], vis[21];
int c[1001]; //桶
int n, k, ans; //n个数字中，选择k个
void dfs(int x, int y) {
    if (x == k + 1) {
        int sum = 0;
        for (int i = 1; i <= k; i++) {
            sum += b[i];
        }
        if (c[sum] == 0) {
            //和第一次出现
            c[sum] = 1; //标记和
            ans++;
        }
        return;
    }
    for (int i = y; i <= n; i++) {
        if (vis[i] == 0) {
            b[x] = a[i];
            vis[i] = 1;
            dfs(x + 1, i + 1); //下一个盒子
            vis[i] = 0;
        }
    }
}

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    dfs(1, 1); //第一个盒子开始选择
    cout << ans;
    return 0;
}
