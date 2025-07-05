#include <bits/stdc++.h>
using namespace std;

int main() {
    //插入乘号
    long long n, m;
    scanf("%lld=%lld", &n, &m);
    int t = 10;
    bool f = false;
    char ch = '=';
    while (m / t != 0) {
        if (n == (m / t) * (m % t)) {
            f = true;
            break;
        }
        t *= 10;
    }
    if (f) {
        printf("%lld%c%lld*%lld", n, ch, m / t, m % t);
    } else printf("Impossible");


    return 0;
}
