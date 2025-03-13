#include <bits/stdc++.h>
using namespace std;

struct node {
    int l;
    int r;
} a[10010];

bool cmp(node x, node y) {
    return x.l != y.l ? x.l > y.l : x.r > y.r;
}

int main() {
    int m, n;
    cin >> m;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i].l >> a[i].r;
    sort(a + 1, a + n + 1, cmp);
    int res = 0;
    bool flag = true;
    int start = 0;
    for (int i = n; i >= 1; i--) {
        int j = i, maxr = INT_MIN;
        while (j >= 1 && a[j].l <= start) {
            maxr = max(maxr, a[j].r);
            j--;
        }
        if (maxr < 0) {
            flag = false;
            break;
        }
        res++;
        if (maxr >= m) break;

        start = maxr;
        i = j + 1;
    }
    if (flag) cout << res;
    else cout << -1;
    return 0;
}
