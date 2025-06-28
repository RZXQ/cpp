1
#include <iostream>
2
using namespace std;
3
int main() {
    4
    const int SIZE = 1000;
    5
    int n, r, p[SIZE], i, j, k, ans;
    6
    bool tmp;
    7
    cin >> n;
    8
    r = 1;
    9
    p[1] = 2;
    10
    for (i = 3; i <= n; i++) {
        11
        tmp = true;
        12
        for (j = 1; j <= r; j++)
            13
        if (i % p[j] == 0) {
            14
            tmp = false;
            15
            break;
            16
        }
        17
        if (tmp) {
            18
            r++;
            19
            p[r] = i;
            20
        }
        21
    }
    22
    ans = 0;
    23
    for (i = 2; i <= n / 2; i++) {
        24
        tmp = false;
        25
        for (j = 1; j <= r; j++)
            26
        for (k = j; k <= r; k++)
            27
        if (i + i == p[j] + p[k]) {
            28
            tmp = true;
            29
            break;
            30
        }
        31
        if (tmp)
            32
        ans++;
        33
    }
    34
    cout << ans << endl;
    35
    return 0;
    36
}
