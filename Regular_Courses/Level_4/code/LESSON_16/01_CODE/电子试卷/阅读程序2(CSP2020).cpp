1
#include <iostream>
2
using namespace std;
3
long long n, ans;
4
int k, len;
5
long long d[1000000];
6
int main() {
    7
    cin >> n >> k;
    8
    d[0] = 0;
    9
    len = 1;
    10
    ans = 0;
    11
    for (long long i = 0; i < n; ++i) {
        12++
        d[0];
        13
        for (int j = 0; j + 1 < len; ++j) {
            14
            if (d[j] == k) {
                15
                d[j] = 0;
                16
                d[j + 1] += 1;
                17++
                ans;
                18
            }
            19
        }
        20
        if (d[len - 1] == k) {
            21
            d[len - 1] = 0;
            22
            d[len] = 1;
            23++
            len;
            24++
            ans;
            25
        }
        26
    }
    27
    cout << ans << endl;
    28
    return 0;
    29
}
