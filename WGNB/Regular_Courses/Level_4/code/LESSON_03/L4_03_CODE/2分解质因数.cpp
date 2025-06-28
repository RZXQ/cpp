#include<bits/stdc++.h>
using namespace std;

void factor(int n) {
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            cout << i << ' ';
            n /= i;
        }
    }
    if (n != 1) cout << n;
}

int main() {
    int n = 0;
    cin >> n;
    factor(n);
    return 0;
}
