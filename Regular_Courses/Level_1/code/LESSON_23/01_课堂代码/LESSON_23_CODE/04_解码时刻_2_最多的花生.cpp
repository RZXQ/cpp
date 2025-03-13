#include<bits/stdc++.h>
using namespace std;
int a[101][101];

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int maxn = 0; //花生总数的最大值
    for (int i = 0; i < m; i++) {
        int t = 0; //用于累计当前行的花生总数
        for (int j = 0; j < n; j++)
            t += a[i][j];
        if (t > maxn) maxn = t;
    }
    cout << maxn;
    return 0;
}
