#include<bits/stdc++.h>
using namespace std;
//预存初始解
long long a[4] = {0, 1, 2, 4};
//递归函数
long long step(long long n) {
    //递归出口
    if (n >= 1 && n <= 3) return a[n];
    //前3步台阶走法数总和
    return step(n - 1) + step(n - 2) + step(n - 3);
}

int main() {
    int n = 0;
    //输入
    cin >> n;
    //求n阶走法数
    cout << step(n);
    return 0;
}
