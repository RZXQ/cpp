#include <bits/stdc++.h>
using namespace std;

struct node {
    int l;
    int r;
} a[10010];

bool cmp(node x, node y) {
    return x.r != y.r ? x.r > y.r : x.l > y.l;
}

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i].l >> a[i].r;
    sort(a + 1, a + n + 1, cmp);
    int res = 0;
    bool flag = true;
    int end = m;
    for (int i = 1; i <= n; i++) {
        int j = i, minl = INT_MAX;
        while (j <= n && a[j].r >= end) {
            minl = min(minl, a[j].l);
            j++;
        }
        if (minl > m) {
            flag = false;
            break;
        }
        res++;
        if (minl <= 0) break;

        end = minl;
        i = j - 1;
    }
    if (flag) cout << res;
    else cout << -1;
    return 0;
}
