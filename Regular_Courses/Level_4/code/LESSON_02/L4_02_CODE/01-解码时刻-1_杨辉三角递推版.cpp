#include<bits/stdc++.h>
using namespace std;
long long a[35][35];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) a[i][j] = 1;
            else a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }
    }
    cout << a[n][m];
    return 0;
}
