#include<bits/stdc++.h>
using namespace std;
int n; //景点数量
int a[1001]; //景点高度
int dp1[1001]; //最长上升子序列
int dp2[1001]; //最长下降子序列
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    //初始化1
    for (int i = 0; i <= n; i++) {
        dp1[i] = 1;
        dp2[i] = 1;
    }
    //最长上升子序列
    for (int i = 1; i <= n; i++) {
        //遍历终点
        for (int j = 1; j < i; j++) {
            //遍历左侧中间点，取可用的最大值

            if (a[i] > a[j])
                dp1[i] = max(dp1[i], dp1[j] + 1);
        }
    }
    //最长下降子序列 (等同从右向左的最长上升子序列)
    for (int i = n; i >= 1; i--) {
        //遍历终点
        for (int j = n; j > i; j--) {
            //遍历右侧中间点，取可用的最大值

            if (a[i] > a[j])
                dp2[i] = max(dp2[i], dp2[j] + 1);
        }
    }
    int ans = 0; //结果
    for (int i = 1; i <= n; i++) {
        //遍历分隔点
        ans = max(ans, dp1[i] + dp2[i] - 1);
    }
    cout << ans;
    return 0;
}
