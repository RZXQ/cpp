#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, ans;
    cin >> n >> ans;
    for (int i = 2; i <= n; i++) {
        int x;
        cin >> x;
        ans ^= x;
    }
    cout << ans;
    return 0;
}
