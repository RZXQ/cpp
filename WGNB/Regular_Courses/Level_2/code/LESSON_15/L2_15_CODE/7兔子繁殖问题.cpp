#include<bits/stdc++.h>
using namespace std;
//递归兔子繁殖问题
int f(int n) {
    //递归出口
    if (n == 1 || n == 2)
        return 1;
    //问题转换公式
    return f(n - 1) + f(n - 2);
}

int main() {
    //求12月兔子数量
    cout << f(12);
    return 0;
}
