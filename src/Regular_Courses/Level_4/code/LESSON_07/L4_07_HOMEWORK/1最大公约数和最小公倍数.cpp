#include<bits/stdc++.h>
using namespace std;

long long gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    long long x, y;
    cin >> x >> y;
    long long k = x * y;
    int cnt = 0;
    for (long long i = x; i <= y; i++) {
        if (k % i == 0 && gcd(i, k / i) == x) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
