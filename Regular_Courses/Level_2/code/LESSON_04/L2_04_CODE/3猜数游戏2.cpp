#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, s = 0, L = 1, R = 1000000000, mid; //n:待猜测数字 s:查找的次数 初始化最小值L，最大值R
    cin >> n; //输入数字n
    while (L <= R) {
        //循环条件
        mid = (L + R) / 2; //求中间值mid
        s++; //查找次数自增1
        if (mid == n) {
            //猜对了，结束循环
            break;
        } else if (mid > n) {
            //mid大于给定数字
            R = mid - 1; //更新最大值R
        } else {
            //mid小于给定数字
            L = mid + 1; //更新最小值L
        }
    }
    if (s > 20) {
        //查找次数超过20次
        cout << "NO";
    } else {
        //没超过20次
        cout << "YES";
    }
    return 0;
}
