#include<bits/stdc++.h>
using namespace std;

struct node {
    int l, r;
} a[50005];

bool cmp(node x, node y) {
    return x.l < y.l; //左端点升序
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].l >> a[i].r;
    }
    sort(a + 1, a + 1 + n, cmp);
    int L = a[1].l, R = a[1].r; //记录区间左右值
    for (int i = 2; i <= n; i++) {
        if (R < a[i].l) {
            cout << "no";
            return 0;
        } else {
            R = max(R, a[i].r);
        }
    }
    cout << L << ' ' << R;
    return 0;
}
