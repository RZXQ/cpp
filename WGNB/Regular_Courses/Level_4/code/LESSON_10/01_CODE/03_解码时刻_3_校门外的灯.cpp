#include <bits/stdc++.h>
using namespace std;
int a[10005];

int main() {
    long long L, n;
    cin >> L >> n;
    long long op, s, t;
    for (long long i = 1; i <= n; i++) {
        cin >> op >> s >> t;
        if (op == 1) {
            for (long long j = s; j <= t; j++) {
                a[j] = 0;
            }
        } else if (op == 2) {
            for (long long j = s; j <= t; j++) {
                if (a[j] == 4) a[j] = 1;
                else if (a[j] == 2) a[j] = 3;
            }
        } else if (op == 3) {
            for (int j = s; j <= t; j++) {
                if (a[j] == 3) a[j] = 4;
                else if (a[j] < 2) a[j] = 2;
            }
        } else if (op == 4) {
            for (int j = s; j <= t; j++) {
                a[j] = (a[j] + j - s + 1) % 5;
            }
        }
    }
    long long ans = 0;
    for (int i = 0; i <= L; i++) {
        if (a[i] == 0) ans++;
    }
    cout << ans << endl;
    return 0;
}
