#include<bits/stdc++.h>
using namespace std;
int a[101][101];

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    int maxn = 0;
    int num = 1;
    for (int j = 1; j <= n; j++) {
        int t = 0;
        for (int i = 1; i <= m; i++)
            t += a[i][j];
        if (t > maxn) {
            maxn = t;
            num = j;
        }
    }
    cout << num << " " << maxn;
    return 0;
}
