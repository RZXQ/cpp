#include<bits/stdc++.h>
using namespace std;
int k[20], a[20];

int main() {
    int t, n, m, num;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        memset(k, 0, sizeof(k));
        memset(a, 0, sizeof(a));
        bool flag = false;
        for (int i = 1; i <= n; i++) {
            scanf("%d", &num);
            num += 9;
            k[num] = 1;
        }
        for (int i = 1; i <= m; i++) {
            scanf("%d", &num);
            num += 9;
            if (k[num] == 1) continue; //k数组出现的数字去掉
            if (a[num] == 0) {
                a[num] = 1; //第一次出现
                continue;
            }
            cout << num - 9 << ' ';
            flag = true;
        }
        if (flag) cout << endl;
    }
    return 0;
}
