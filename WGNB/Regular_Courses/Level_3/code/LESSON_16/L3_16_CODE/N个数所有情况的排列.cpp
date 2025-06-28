#include<bits/stdc++.h>
using namespace std;
int box[10], vis[10];
int n;

void dfs(int x) {
    if (x == n + 1) return;
    for (int i = 1; i <= n; i++) {
        //选择1~n的数字
        if (vis[i] == 0) {
            box[x] = i; //数字i放到x号盒子内
            vis[i] = 1; //标记数字i已使用
            for (int j = 1; j <= x; j++) {
                cout << box[j];
            }
            cout << endl; //输出换行
            dfs(x + 1); //下一个盒子
            vis[i] = 0;
        }
    }
}

int main() {
    cin >> n;
    dfs(1); //第一个盒子
    return 0;
}
