#include<bits/stdc++.h>
using namespace std;
//递归
long long f(long long n) {
    //递归出口
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    //递归转换公式
    return f(n - 1) + f(n - 2);
}

int main() {
    int n = 0;
    cin >> n; //输入台阶数量
    cout << f(n); //求n阶台阶的走法数
    return 0;
}
