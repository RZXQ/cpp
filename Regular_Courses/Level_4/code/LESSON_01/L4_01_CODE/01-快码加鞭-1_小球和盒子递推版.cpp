#include <bits/stdc++.h>
using namespace std;
long long a[25];

int main() {
    int n;
    cin >> n;
    a[1] = 0;
    a[2] = 1;
    if (n == 1 || n == 2) {
        cout << a[n];
        return 0;
    }
    for (int i = 3; i <= n; i++) {
        a[i] = (i - 1) * (a[i - 1] + a[i - 2]);
    }
    cout << a[n];


    return 0;
}
