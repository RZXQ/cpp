#include <bits/stdc++.h>
using namespace std;

struct node {
    int t;
    int m;
} g[505];

bool cmp(node x, node y) {
    return x.m > y.m;
}

bool f[505];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> g[i].t;
    for (int i = 1; i <= n; i++)
        cin >> g[i].m;
    sort(g + 1, g + n + 1, cmp);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        for (int t = g[i].t; t >= 1; t--) {
            if (!f[t]) {
                f[t] = true;
                sum += g[i].m;
                break;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
