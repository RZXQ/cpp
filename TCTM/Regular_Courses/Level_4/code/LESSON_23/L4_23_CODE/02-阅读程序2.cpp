#include<iostream>
#include<cstdio>
using namespace std;

int f1(int n, int m) {
    int res = 1;
    for (int i = n; i >= n - m + 1; i--) {
        res *= i;
    }
    return res;
}

int f2(int n, int m) {
    int res = 1;
    for (int i = n, j = 1; j <= m; i--, j++) {
        res *= i;
        res /= j;
    }
    return res;
}

int main() {
    int n = 0, m = 0;
    cin >> n >> m;
    cout << f1(n, m) - f2(n, m) << endl;
    return 0;
}
