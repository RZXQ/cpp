#include <iostream>
using namespace std;

int main() {
    int n, m, t, a[15][15] = {0};
    cin >> t;
    while (t--) {
        cin >> m >> n;
        for (int i = 1; i <= 10; i++) {
            a[i][1] = 1;
            a[1][i] = 1;
            a[0][i] = 1;
        }
        for (int i = 2; i <= m; i++) {
            for (int k = 2; k <= n; k++) {
                if (i < k)
                    a[i][k] = a[i][i];
                else
                    a[i][k] = a[i][k - 1] + a[i - k][k];
            }
        }
        cout << a[m][n] << endl;;
    }
    return 0;
}
