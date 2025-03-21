#include <iostream>
using namespace std;
long long n, ans;
int k, len;
long long d[1000000];

int main() {
    cin >> n >> k;
    d[0] = 0;
    len = 1;
    ans = 0;
    for (long long i = 0; i < n; ++i) {
        ++d[0];
        for (int j = 0; j + 1 < len; ++j) {
            if (d[j] == k) {
                d[j] = 0;
                d[j + 1] += 1;
                ++ans;
            }
        }
        if (d[len - 1] == k) {
            d[len - 1] = 0;
            d[len] = 1;
            ++len;
            ++ans;
        }
        for (int k = 0; k <= i; k++) {
            cout << "d[" << k << "]:" << d[k] << ',';
        }
        cout << len << ' ' << ans << endl;
    }
    cout << ans << endl;
    return 0;
}
