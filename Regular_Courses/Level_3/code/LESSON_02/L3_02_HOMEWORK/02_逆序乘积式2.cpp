#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, ans = 0;
    int a, b, c, d;
    cin >> n >> m;
    for (int i = n; i < m; i++) {
        for (int j = i + 1; j <= m; j++) {
            a = i / 10;
            b = i % 10;
            c = j / 10;
            d = j % 10;
            int x = (b * 10 + a);
            int y = (d * 10 + c);
            if (a == b || c == d || a == c || a == d || b == c || b == d)continue;
            if (a < b && a < d && (i * j == x * y)) {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}
