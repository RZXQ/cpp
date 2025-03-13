#include<bits/stdc++.h>
using namespace std;
int a[16][16], b[16][16];
int n;

int check(int s) {
    for (int j = n; j >= 1; j--) {
        if (s & 1 == 0 && a[1][j] == 1) return 0x7ffff;
        b[1][j] = s & 1;
        s >>= 1;
    }
    for (int i = 2; i <= n; i++) {
        //����2~n��
        for (int j = 1; j <= n; j++) {
            int sum = 0;
            if (b[i - 2][j] && i > 2) sum++;
            if (b[i - 1][j - 1] && j > 1) sum++;
            if (b[i - 1][j + 1] && j < n) sum++;
            b[i][j] = sum % 2;
            if (a[i][j] == 1 && b[i][j] == 0) return 0x7ffff;
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            if (a[i][j] != b[i][j]) cnt++;
    }
    return cnt;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) cin >> a[i][j];
    int ans = 0x7ffff;
    for (int i = 0; i <= (1 << n) - 1; i++) {
        ans = min(ans, check(i));
        memset(b, 0, sizeof(b));
    }
    if (ans == 0x7ffff) cout << -1;
    else cout << ans;
    return 0;
}
