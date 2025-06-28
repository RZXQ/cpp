#include<bits/stdc++.h>
using namespace std;

int getNum(int m, int n) {
    if (m < n) return 0;
    if (m == n || n == 1) return 1;
    return getNum(m - 1, n - 1) + getNum(m - 1, n) * n;
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << getNum(m, n);
    return 0;
}
