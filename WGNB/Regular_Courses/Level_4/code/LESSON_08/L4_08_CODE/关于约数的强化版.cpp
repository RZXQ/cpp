#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long ans = 0, j, len;
    for (long long i = 1; i <= n; i = j + 1) {
        j = n / (n / i);
        len = j - i + 1;
        ans += len * (n / i);
    }
    cout << ans;
    return 0;
}
