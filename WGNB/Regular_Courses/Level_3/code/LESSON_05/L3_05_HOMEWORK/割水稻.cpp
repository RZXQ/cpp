#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, r;
    cin >> n >> r;
    int a[405];
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + 1 + n);
    int t = 0;
    for (int i = r + 1; i <= n; i++) {
        a[i] = a[i] + a[i - r];
    }
    for (int i = 1; i <= n; i++) t += a[i];
    cout << t;
    return 0;
}
