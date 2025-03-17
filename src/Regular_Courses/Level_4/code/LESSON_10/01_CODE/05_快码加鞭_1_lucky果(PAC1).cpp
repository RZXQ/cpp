#include <bits/stdc++.h>
using namespace std;
long long f[100010], k;

bool cmp(long long x, long long y) {
    return x > y;
}

int main() {
    long long n, q;
    cin >> n >> q;
    char c;
    for (long long i = 1; i <= n; i++) {
        cin >> c;
        if (c == 'I') {
            cin >> f[++k];
        } else {
            sort(f + 1, f + k + 1, cmp);
            cout << f[q] << endl;
            f[q] = 0;
        }
    }
    return 0;
}
