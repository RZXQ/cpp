#include <iostream>
#include <cmath>
using namespace std;
const int N = 1001;
int a[N], n, k, l = 0;

int main() {
    long long ans = 0;
    cin >> n >> k;
    while (k) a[++l] = k % 2, k /= 2;
    for (int i = l; i >= 1; i--)
        ans += pow(n, i - 1) * a[i];
    cout << ans;
    return 0;
}
