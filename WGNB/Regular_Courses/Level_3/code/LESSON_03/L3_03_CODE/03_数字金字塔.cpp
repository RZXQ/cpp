#include<bits/stdc++.h>
using namespace std;
int a[1001][1001];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            a[i][j] += max(a[i - 1][j], a[i - 1][j - 1]);
        }
    }
    int max1 = 0;
    for (int j = 1; j <= n; j++) {
        if (max1 < a[n][j]) max1 = a[n][j];
    }
    cout << max1;
    return 0;
}
