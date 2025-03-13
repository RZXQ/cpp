1
#include <iostream>
2
using namespace std;
3
int n, k;
4
int solve1() {
    5
    int l = 0, r = n;
    6
    while (l <= r) {
        7
        int mid = (l + r) / 2;
        8
        if (mid * mid <= n) l = mid + 1;
        9
        else
        r = mid - 1;
        10
    }
    11
    return l - 1;
    12
}

13
double solve2(double x) {
    14
    if (x == 0)return x;
    15
    for (int i = 0; i < k; i++)
        16
    x = (x + n / x) / 2;
    17
    return x;
    18
}

19
int main() {
    20
    cin >> n >> k;
    21
    double ans = solve2(solve1());
    22
    cout << ans << ' ' << (ans * ans == n) << endl;
    23
    return 0;
    24
}
