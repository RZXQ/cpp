#include<bits/stdc++.h>
using namespace std;

struct node {
    int b, e, t;
} a[5001];

bool cmp(node x, node y) {
    return x.b > y.b; //左端点降序
}

int tree[30001]; //0:未种树
int main() {
    int n, h;
    cin >> n >> h;
    for (int i = 1; i <= h; i++) {
        cin >> a[i].b >> a[i].e >> a[i].t;
    }
    sort(a + 1, a + 1 + h, cmp);
    for (int i = 1; i <= h; i++) {
        //开始种树
        int cnt = 0; //count
        for (int j = a[i].b; j <= a[i].e; j++) {
            //从前到后统计这个区间有多少树
            if (tree[j] == 1) {
                cnt++;
            }
        }
        if (cnt >= a[i].t) continue; //满足条件不需要种树
        else cnt = a[i].t - cnt; //需要种树的数量
        for (int j = a[i].b; j <= a[i].e; j++) {
            //从前往后种树
            if (tree[j] == 0) {
                tree[j] = 1;
                cnt--;
            }
            if (cnt == 0) break; //种完啦
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (tree[i] == 1) ans++;
    }
    cout << ans;
    return 0;
}
