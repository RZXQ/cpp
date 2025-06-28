#include<bits/stdc++.h>
using namespace std;
int a[21], box[21], vis[21];
int n, k; //n个数字中选k个数字
void dfs(int y, int x) {
    if (x == k + 1) {
        for (int i = 1; i <= k; i++) {
            cout << box[i] << ' ';
        }
        cout << endl;
        return;
    }
    for (int i = y; i <= n; i++) {
        //寻找没有使用过的数字
        if (vis[i] == 0) {
            box[x] = a[i]; // 把a[i]数字放到x号盒子内
            vis[i] = 1; //标记使用过数字
            dfs(i + 1, x + 1); //下一个盒子
            vis[i] = 0;
        }
    }
}

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    dfs(1, 1); //第一个数字放第一个盒子
    return 0;
}
