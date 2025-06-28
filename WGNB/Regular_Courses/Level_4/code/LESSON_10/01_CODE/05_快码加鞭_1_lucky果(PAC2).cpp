#include <bits/stdc++.h>
using namespace std;
long long a[10000010];

int main() {
    long long n, q;
    cin >> n >> q;
    char c;
    long long w;
    long long Max = 0, Min = 2147483647;
    for (long long i = 1; i <= n; i++) {
        cin >> c;
        if (c == 'I') {
            cin >> w;
            a[w]++;
            if (w > Max) Max = w;
            if (w < Min) Min = w;
        } else {
            long long s = 0;
            for (long long j = Max; j >= Min; j--) {
                if (a[j] != 0 && s + a[j] >= q) {
                    a[j]--;
                    cout << j << endl;
                    break;
                } else if (a[j] != 0 && s + a[j] < q) {
                    s = s + a[j];
                }
            }
        }
    }
    return 0;
}
