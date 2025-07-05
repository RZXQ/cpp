#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[6][6];
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> a[i][j];
        }
    }
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= 5; i++) {
        swap(a[m][i], a[n][i]);
    }
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
