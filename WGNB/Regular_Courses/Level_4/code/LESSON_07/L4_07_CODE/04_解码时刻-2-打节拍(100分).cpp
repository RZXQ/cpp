#include <bits/stdc++.h>
using namespace std;
int n;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return a * b / (gcd(a, b));
}

int main() {
    int x, y;
    cin >> x >> y >> n;
    cout << n / x + n / y - (n / lcm(x, y));
    return 0;
}
