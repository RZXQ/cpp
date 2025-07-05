#include<bits/stdc++.h>
using namespace std;

struct node {
    int l, r;
} a[100001];

bool cmp(node x, node y) {
    return x.r < y.r; //右端点升序
}

int main() {
    int n; //n个闭区间
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].l >> a[i].r;
    }
    sort(a + 1, a + 1 + n, cmp);
    int t = a[1].r; //t:存储选定点
    int ans = 1; //ans:存储选定的点数量
    for (int i = 2; i <= n; i++) {
        if (t < a[i].l) {
            t = a[i].r;
            ans++;
        }
    }
    //输出选定点的数量
    cout << ans;
    return 0;
}
