#include <iostream>
using namespace std;

int main() {
    int n, x, y, m;
    cin >> n >> x >> y;
    if (y % x == 0) m = y / x;
    else m = y / x + 1;
    if (m > n) cout << 0;
    else cout << n - m;
    return 0;
}
