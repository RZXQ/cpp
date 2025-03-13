#include<bits/stdc++.h>
using namespace std;

struct node {
    int x, y;
};

bool cmp(node a, node b) {
    if (a.x == b.x) {
        return a.y < b.y;
    }
    return a.x < b.x;
}

//n已有点数量 k可添加点数量
int n, k;
node a[510];
int dp[510][510];
int ans;

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].x >> a[i].y;
    }
    sort(a + 1, a + n + 1, cmp);
    //遍历目前可以增加几个点
    for (int i = 0; i <= k; i++) {
        //遍历所有现有的点，以j为结束点
        for (int j = 1; j <= n; j++) {
            //初始化
            dp[i][j] = 1 + i;
            //处理l到j所有可用的点数
            for (int l = 1; l < j; l++) {
                //判断当前第l点是否在j之前
                if (a[l].x <= a[j].x && a[l].y <= a[j].y) {
                    //连接l~j需要消耗的点数
                    int t = a[j].x - a[l].x + a[j].y - a[l].y - 1;
                    //i是目前可以消耗的点数
                    if (t <= i) {
                        dp[i][j] = max(dp[i][j], dp[i - t][l] + t + 1);
                    }
                }
            }
            ans = max(ans, dp[i][j]);
        }
    }
    cout << ans;
    return 0;
}
