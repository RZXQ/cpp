#include<bits/stdc++.h>
using namespace std;

int f(int n) {
    //递归出口
    if (n == 1)
        return 1;
    //递归公式
    return f(n - 1) + n;
}

int main() {
    //输出1到10的累加和
    cout << f(10);
    return 0;
}
