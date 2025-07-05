#include<bits/stdc++.h>
using namespace std;
int a[21][21];

int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    for (int i = 1; i <= m; i++)
        a[n][i] = 1;
    for (int i = 1; i <= n; i++)
        a[i][1] = 1;
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 2; j <= m; j++) {
            a[i][j] = a[i][j - 1] + a[i + 1][j];
        }
    }
    cout << a[x][y];
    return 0;
}
