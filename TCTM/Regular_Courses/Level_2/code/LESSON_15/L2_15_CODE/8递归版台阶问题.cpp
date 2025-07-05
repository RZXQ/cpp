#include<bits/stdc++.h>
using namespace std;
//递归台阶问题
long long step(long long n) {
    if (n == 1) //递归出口
        return 1;
    if (n == 2) //递归出口
        return 2;
    //转换公式
    return step(n - 1) + step(n - 2);
}

int main() {
    int n = 0;
    cin >> n; //设置台阶数量
    cout << step(n); //n阶台阶的走法数
    return 0;
}
