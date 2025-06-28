#include<bits/stdc++.h>
using namespace std;

int fun(int x) {
    int cnt = 0;
    while (x) {
        cnt += x / 5;
        x /= 5;
    }
    return cnt;
}

int main() {
    int n, ans = 0; //��β��n��0�Ľ׳� 
    cin >> n;
    if (n == 0) {
        cout << 1;
        return 0;
    }
    int l = 0, r = 1e9;
    while (l <= r) {
        int mid = (l + r) >> 1;
        int cnt = fun(mid);
        if (cnt >= n) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    if (fun(ans) == n) cout << ans;
    else cout << "No solution";
    return 0;
}
