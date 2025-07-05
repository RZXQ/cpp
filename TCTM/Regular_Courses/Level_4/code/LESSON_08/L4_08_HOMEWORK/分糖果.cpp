#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, l, r;
    cin >> n >> l >> r;
    if (r / n * n > l) cout << n - 1;
    else cout << r % n;
    return 0;
}
