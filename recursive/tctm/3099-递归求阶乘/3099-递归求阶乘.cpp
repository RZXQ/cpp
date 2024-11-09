#include <iostream>
using namespace std;

long long f(long long n) {
    if (n == 1) {
        return 1;
    }
    return n * f(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << f(n) << endl;
}

/*
标准代码:
#include<iostream>
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
*/