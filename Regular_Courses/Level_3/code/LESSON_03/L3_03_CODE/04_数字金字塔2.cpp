#include<bits/stdc++.h>
using namespace std;
int a[1001][1001];
int min1 = 1000 * 100;
int n;

int main() {
    cin >> n;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            a[i][j] = min1;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cin >> a[i][j];
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            a[i][j] += min(a[i - 1][j], a[i - 1][j - 1]);
        }
    }
    for (int j = 1; j <= n; j++) {
        if (min1 > a[n][j]) min1 = a[n][j];
    }
    cout << min1;
    return 0;
}
