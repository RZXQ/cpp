#include<bits/stdc++.h>
using namespace std;
//辗转相除
long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    long long a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}
