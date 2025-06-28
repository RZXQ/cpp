#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    //	scanf("%lld",&n);
    cin >> n;
    int cnt = 0;
    while (n > 1) {
        if (n % 2 == 1) n = n * 3 + 1;
        else n /= 2;
        cnt++;
    }
    printf("%d", cnt);
    return 0;
}
