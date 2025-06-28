#include<bits/stdc++.h>
using namespace std;
int a[1000001], s[1000001];

int main() {
    int n, l;
    cin >> n >> l;
    for (int i = 1; i <= n; i++) cin >> a[i];
    //计算前缀和
    s[1] = a[1];
    for (int i = 2; i <= n; i++) s[i] = s[i - 1] + a[i];
    //创建变量存储最大数字和
    //初始化成比可能出现的最小值还小
    int max1 = -1000000000;
    for (int i = l; i <= n; i++) {
        if (max1 < s[i] - s[i - l])
            max1 = s[i] - s[i - l];
    }
    cout << max1;
    return 0;
}
