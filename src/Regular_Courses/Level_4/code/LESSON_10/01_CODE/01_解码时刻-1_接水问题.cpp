#include<bits/stdc++.h>
using namespace std;
int a[10001], b[101];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) b[i] = a[i];
    for (int i = m + 1; i <= n; i++) {
        sort(b + 1, b + m + 1);
        b[1] += a[i];
    }
    sort(b + 1, b + m + 1);
    cout << b[m];
    return 0;
}
