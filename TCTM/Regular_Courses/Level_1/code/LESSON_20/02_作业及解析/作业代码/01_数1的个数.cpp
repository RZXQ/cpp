#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int m = i;
        while (m != 0) {
            if (m % 10 == 1) cnt++;
            m /= 10;
        }
    }
    cout << cnt;
    return 0;
}
