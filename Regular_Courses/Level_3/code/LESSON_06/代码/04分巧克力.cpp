#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    int h[100001], w[100001];
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> h[i] >> w[i];
    //确定寻找范围
    int L = 1, R = 100000;
    int mid = 0;
    int ans = 0;
    while (L <= R) {
        //取中间值
        mid = (L + R) / 2;
        //验证中间值，以中间值做边长能切出几个正方形
        int s = 0;
        for (int i = 1; i <= n; i++)
            s += (h[i] / mid) * (w[i] / mid);
        //判断验证结果，调整范围
        if (s < k) {
            R = mid - 1;
        } else {
            ans = mid;
            L = mid + 1;
        }
    }
    cout << ans;
    return 0;
}
