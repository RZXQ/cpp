#include<bits/stdc++.h>
using namespace std;
long long n, ans, a[15000], len;

void f(int x) {
    for (int i = 2; i <= n / i; i++) {
        if (x % i == 0) {
            a[++len] = i;
            if (x / i != i) {
                a[++len] = x / i;
            }
        }
    }
}

void dfs(int d) {
    ans++;
    for (int i = 1; i <= len; i++) {
        if (d * a[i] > n)break;
        if (n % (d * a[i]) == 0 && n != d * a[i]) {
            dfs(d * a[i]);
        }
    }
}

int main() {
    cin >> n;
    f(n);
    sort(a + 1, a + 1 + len);
    dfs(1);
    cout << ans;
    return 0;
}
