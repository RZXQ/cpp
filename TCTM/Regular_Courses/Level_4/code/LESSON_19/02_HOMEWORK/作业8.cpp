#include<bits/stdc++.h>
using namespace std;
const int N = 10010;
int n, k;
double s[N];

bool check(double x) {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (s[i] >= x)
            cnt += s[i] / x;
    }
    return (cnt >= k ? 1 : 0);
}

int main() {
    double left = 0, right = 0, mid = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
        right = max(right, s[i]);
    }
    sort(s + 1, s + 1 + n);
    while (right - left > 1e-4) {
        mid = (left + right) / 2;
        if (check(mid)) {
            left = mid;
        } else {
            right = mid;
        }
    }
    cout << fixed << setprecision(2) << left;
    return 0;
}
