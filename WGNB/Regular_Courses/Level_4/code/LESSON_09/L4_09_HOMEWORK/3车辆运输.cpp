#include <bits/stdc++.h>
using namespace std;

bool my_cmp(int x, int y) {
    return x > y;
}

int a[105];

int main() {
    int t;
    cin >> t;
    int k, m; //k：货物件数  m：卡车数量
    while (t--) {
        cin >> k >> m;
        for (int i = 1; i <= m; i++) cin >> a[i];
        sort(a + 1, a + 1 + m, my_cmp); //运送货物件数降序
        int cnt = 0;
        for (int i = 1; i <= m; i++) {
            if (k > 0) {
                k -= a[i];
                cnt++;
            } else break;
        }
        if (k > 0) cout << "NO" << endl;
        else cout << cnt << endl;
    }
    return 0;
}
