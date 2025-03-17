#include<bits/stdc++.h>
using namespace std;
int a[101];

int main() {
    int n, m, ans = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++) {
        //枚举第一个数字
        for (int j = i + 1; j <= n; j++) {
            //枚举第二个数字
            for (int k = j + 1; k <= n; k++) {
                //枚举第三个数字
                if (a[i] + a[j] + a[k] <= m)
                    ans = max(ans, a[i] + a[j] + a[k]);
            }
        }
    }
    cout << ans; //输出结果
    return 0;
}
