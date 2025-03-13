#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, ans = 0;
    int a, b, c, d;
    cin >> n >> m;
    for (int i = n; i < m; i++) {
        a = i / 10;
        b = i % 10;
        if (a == b)continue;
        for (int j = i + 1; j <= m; j++) {
            c = j / 10;
            d = j % 10;
            if (c == d || a == c || a == d || b == c || b == d)continue;
            if (i * j == (b * 10 + a) * (d * 10 + c)) {
                ans++;
            }
        }
    }
    cout << ans - 10;
    return 0;
}
