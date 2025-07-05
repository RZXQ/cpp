#include<bits/stdc++.h>
using namespace std;
//输出等差序列第n个数
int f(int n) {
    if (n == 1)
        return 1;
    return f(n - 1) + 2;
}

int main() {
    int n = 0;
    cin >> n;
    cout << f(n);
    return 0;
}
