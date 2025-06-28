#include <bits/stdc++.h>
using namespace std;
long long book[21];
int n;

int main() {
    cin >> n;
    book[1] = 0;
    book[2] = 1;
    if (n == 1) {
        cout << 0;
        return 0;
    }
    if (n == 2) {
        cout << 1;
        return 0;
    }
    for (int i = 3; i <= n; i++) {
        book[i] = (i - 1) * (book[i - 1] + book[i - 2]);
    }
    cout << book[n];
    return 0;
}
