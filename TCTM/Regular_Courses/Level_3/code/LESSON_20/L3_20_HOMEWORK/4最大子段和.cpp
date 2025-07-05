#include<bits/stdc++.h>
using namespace std;
int n, a[1000001], dp[1000001], ans = -1000;

int main() {
    //数字序列长度
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        //初始化dp数组
        if (i == 1) dp[i] = a[i];
            //状态转移
        else dp[i] = max(a[i], dp[i - 1] + a[i]);
        //保存最大子段和
        ans = max(ans, dp[i]);
    }
    //输出结果
    cout << ans;
    return 0;
}
