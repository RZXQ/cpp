#include<bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int a[101][101];
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    int minn = 1000, sum = 0, r = 0;
    for (int j = 1; j <= n; j++) {
        sum = 0;
        for (int i = 1; i <= m; i++) {
            sum += a[i][j];
        }
        if (minn > sum) {
            minn = sum;
            r = j;
        }
    }
    cout << r << " " << minn;
    return 0;
}
