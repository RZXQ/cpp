#include<bits/stdc++.h>
using namespace std;
int vis[4]; //vis:标记数组
int box[4]; //box:盒子
void dfs(int x) {
    //从当前x号盒子开始放置数字
    if (x == 4) {
        for (int i = 1; i <= 3; i++) {
            cout << box[i];
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= 3; i++) {
        //尝试放置数字1~n
        if (vis[i] == 0) {
            box[x] = i; //把i放到x号盒子
            vis[i] = 1;
            dfs(x + 1);
            vis[i] = 0;
        }
    }
}

int main() {
    dfs(1); //第一个盒子开始
    return 0;
}
