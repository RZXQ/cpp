#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    double r = 0;
    for (long long i = n; i <= m; i++) {
        r += 1.0 / i / i;
    }
    printf("%.5lf", r);
    return 0;
}
