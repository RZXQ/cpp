#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int N = 1e5 + 10;

struct node {
    LL x, y;
} a[N];

LL n, sum = 0;
LL dis(LL x1,LL y1,LL x2,LL y2) {
    return abs(x1 - x2) + abs(y1 - y2);
}

int main() {
    cin >> n;
    for (LL i = 1; i <= n; i++) {
        cin >> a[i].x >> a[i].y;
        if (i > 1) sum = sum + dis(a[i - 1].x, a[i - 1].y, a[i].x, a[i].y);
    }
    LL ans = 0x3f3f3f3f, sum1 = 0;
    for (LL i = 2; i < n; i++) {
        sum1 = sum;
        sum1 = sum1 - dis(a[i - 1].x, a[i - 1].y, a[i].x, a[i].y) - dis(a[i].x, a[i].y, a[i + 1].x, a[i + 1].y) + dis(
                   a[i - 1].x, a[i - 1].y, a[i + 1].x, a[i + 1].y);
        ans = min(ans, sum1);
    }
    cout << ans;
    return 0;
}

/*
sum=20
11 7 12
7 2 5
*/
