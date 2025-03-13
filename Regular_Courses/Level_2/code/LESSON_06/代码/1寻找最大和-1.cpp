#include<bits/stdc++.h>
using namespace std;
int a[101];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        //枚举第一个数字
        for (int j = 1; j <= n; j++) {
            //枚举第二个数字
            for (int k = 1; k <= n; k++) {
                //枚举第三个数字
                if (i != j && i != k && j != k) {
                    //如果三个数字各不相同
                    if (a[i] + a[j] + a[k] <= m) //和满足不大于m
                        ans = max(ans, a[i] + a[j] + a[k]); //更新最大值
                }
            }
        }
    }
    cout << ans; //输出结果
    return 0;
}
