#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[5001] = {0};
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a[x]++;
    }
    for (int i = 1; i <= 1000; i++) {
        if (a[i] % 2) {
            cout << i;
        }
    }


    return 0;
}
