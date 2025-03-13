#include<bits/stdc++.h>
using namespace std;

int main() {
    //s总长度 n岩石个数 m最多移走岩石数量
    int s = 0, n = 0, m = 0, a[100010] = {};
    cin >> s >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int L = 1, R = s, mid = 0, ans = 0;
    while (L <= R) {
        mid = (L + R) / 2;
        //d前一个岩石位置  cnt记录移走数量
        int d = 0, cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (a[i] - d < mid)
                cnt++;
            else
                d = a[i];
        }
        //处理最后一块石头	
        if (s - d < mid)
            cnt++;
        if (cnt > m) {
            R = mid - 1; //缩小间距
        } else {
            ans = mid; //记录可用间距
            L = mid + 1; //尝试更大的间距
        }
    }
    cout << ans;
    return 0;
}
