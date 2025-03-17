#include<bits/stdc++.h>
using namespace std;
//递归计算阶乘
long long fac(long long n) {
    if (n == 1)
        return 1;
    return fac(n - 1) * n;
}

int main() {
    int n = 0;
    cin >> n;
    cout << fac(n);
    return 0;
}
