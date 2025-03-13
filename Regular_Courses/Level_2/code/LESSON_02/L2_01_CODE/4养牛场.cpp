#include<bits/stdc++.h>
using namespace std;

int main() {
    //a数组存牛总数
    int a[21] = {};
    int n; //n表示年份
    cin >> n;
    a[1] = 1;
    a[2] = 2; //把前两年的牛数作为初始值
    //求第n年牛的总数
    for (int i = 3; i <= n; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }
    //减掉最开始的母牛，就是后代的数量
    cout << a[n] - 1;
    return 0;
}
