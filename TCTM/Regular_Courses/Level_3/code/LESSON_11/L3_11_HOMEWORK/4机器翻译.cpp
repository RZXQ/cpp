#include<bits/stdc++.h>
using namespace std;
int vis[1010]; //标记数组
queue<int> q; //队列
int main() {
    int m, n; //内存容量，n个单词
    cin >> m >> n;
    int num;
    int ans = 0; //答案
    for (int i = 1; i <= n; i++) {
        cin >> num;
        if (vis[num] == 0) {
            //内存没有记录
            if (q.size() >= m) {
                //腾出一个空间
                vis[q.front()] = 0;
                q.pop();
            }
            q.push(num);
            vis[num] = 1;
            ans++;
        }
    }
    cout << ans;
    return 0;
}
