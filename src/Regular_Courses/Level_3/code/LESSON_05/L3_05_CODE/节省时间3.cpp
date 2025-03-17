#include<bits/stdc++.h>
using namespace std;
int a[401];

int main() {
    int n, r;
    double t = 0;
    cin >> n >> r;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + 1 + n);
    for (int i = r + 1; i <= n; i++)
        a[i] += a[i - r];
    for (int i = 1; i <= n; i++) t += a[i];
    cout << fixed << setprecision(2) << t / n;
    return 0;
}
