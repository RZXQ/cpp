#include<bits/stdc++.h>
using namespace std;
int n, k, ans; //整数n 分成k份 答案(方案数)
void dfs(int x, int j, int n) {
    if (x == k) {
        ans++;
        return;
    }
    for (int i = j; i <= n; i++) {
        if (n - i < i) break; //剪枝 无价值
        dfs(x + 1, i, n - i);
    }
}

int main() {
    cin >> n >> k;
    dfs(1, 1, n); //第1份、从1开始尝试、当前剩余n
    cout << ans;
    return 0;
}
