#include <bits/stdc++.h>
using namespace std;

struct goods {
    int w; //数量
    int v; //价值
    double p; //单价
} g[1005];

//按单价降序
bool cmp(struct goods g1, struct goods g2) {
    return g1.p > g2.p;
}

int main() {
    int n, w;
    cin >> n >> w;
    for (int i = 0; i < n; i++) {
        cin >> g[i].w >> g[i].v;
        g[i].p = (g[i].v * 1.0) / g[i].w;
    }
    //排序
    sort(g, g + n, cmp);
    double sum = 0;
    double val = 0;
    for (int i = 0; i < n; i++) {
        if (sum + g[i].w <= w) {
            sum += g[i].w;
            val += g[i].v;
        } else {
            val += (w - sum) * g[i].p;
            sum = w;
        }
        if (sum >= w) {
            break;
        }
    }
    cout << fixed << setprecision(2) << val;
    return 0;
}
