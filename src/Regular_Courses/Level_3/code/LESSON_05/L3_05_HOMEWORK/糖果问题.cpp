#include<iostream>
using namespace std;
int a[101];

int main() {
    int n, x, ans = 0;
    cin >> n >> x;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 2; i <= n; i++) {
        if (a[i] + a[i - 1] > x) {
            ans += a[i] + a[i - 1] - x;
            if (a[i] > a[i] + a[i - 1] - x)
                a[i] -= (a[i] + a[i - 1] - x);
            else
                a[i] = 0;
        }
    }
    cout << ans;
    return 0;
}
