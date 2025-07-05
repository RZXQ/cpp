#include<bits/stdc++.h>
using namespace std;
int a[21], b[21], vis[21];
int n, k, ans; //n个数字中，选择k个
bool prime(int x) {
    for (int i = 2; i <= x / 2; i++)
        if (x % i == 0) return false;
    return true;
}

void dfs(int x, int y) {
    if (x == k + 1) {
        int sum = 0;
        for (int i = 1; i <= k; i++) {
            sum += b[i];
        }
        if (prime(sum)) ans++; //判断素数
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
