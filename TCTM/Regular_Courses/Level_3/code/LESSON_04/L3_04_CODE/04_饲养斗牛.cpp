#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a[100001]; //存储各个牛舍的位置
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    // 牛舍没有按照顺序输入，需要自行排序
    sort(a + 1, a + n + 1);
    int ans = 0;
    int L = 1, R = a[n], mid;
    while (L <= R) {
        mid = (L + R) / 2;
        int cnt = 1; //记录安放牛的数量
        //前一个牛舍的位置
        int s = a[1];
        for (int i = 2; i <= n; i++) {
            if (a[i] - s >= mid) {
                cnt++;
                s = a[i];
            }
        }
        if (cnt < m) {
            R = mid - 1; //放不下，把距离缩小
        } else {
            ans = mid;
            L = mid + 1; //够放，可以尝试更大的距离
        }
    }
    cout << ans;
    return 0;
}
