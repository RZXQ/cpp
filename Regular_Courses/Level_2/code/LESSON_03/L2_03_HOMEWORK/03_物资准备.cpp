#include<bits/stdc++.h>
using namespace std;
int a[100010]; //原数据
int s[100010]; //前缀和
int main() {
    int n, m;
    cin >> n >> m;
    //输入原数据
    for (int i = 1; i <= n; i++) cin >> a[i];
    //计算前缀和s
    s[1] = a[1];
    for (int i = 2; i <= n; i++) s[i] = s[i - 1] + a[i];
    //总数 注意总数会超过int范围，用long long类型
    long long sum = 0;
    for (int i = 1; i <= m; i++) {
        int L, R;
        cin >> L >> R;
        sum += (s[R] - s[L - 1]);
    }
    cout << sum;
    return 0;
}
