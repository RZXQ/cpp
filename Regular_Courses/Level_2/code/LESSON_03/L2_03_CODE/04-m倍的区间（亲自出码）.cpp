#include<bits/stdc++.h>
using namespace std;
int a[500010] = {}; //原数组
int s[500010] = {}; //前缀和数组
int main() {
    int n, k, m;
    cin >> n >> k >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    //推导前缀和数组
    s[1] = a[1];
    for (int i = 2; i <= n; i++) {
        s[i] = s[i - 1] + a[i];
    }
    int ans = 0;
    //遍历所有长度K的区间
    for (int i = k; i <= n; i++) {
        int t = s[i] - s[i - k]; //计算区间和
        if (t % m == 0) {
            //判断区间和是m倍数
            ans++;
        }
    }
    cout << ans;
    return 0;
}
