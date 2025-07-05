#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> fac;
    fac.reserve((int) ceil(sqrt(n)));
    int i;
    for (i = 1; i * i < n; ++i) {
        if (n % i == 0) {
            fac.push_back(i);
        }
    }
    for (int k = 0; k < fac.size(); ++k) {
        cout << fac[k] << " ";
    }
    if (i * i == n) {
        cout << i << " ";
    }
    for (int k = fac.size() - 1; k >= 0; --k) {
        cout << n / fac[k] << " ";
    }
    return 0;
}
