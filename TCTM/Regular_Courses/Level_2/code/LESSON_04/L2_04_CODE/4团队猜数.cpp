#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, s1 = 0, L = 1, R = 1000000000, mid; //n:待猜测数字 s:查找总次数 初始化最小值L，最大值R
    int s = 0; //组员参加一次的次数
    for (int i = 1; i <= 3; i++) {
        cin >> n; //输入数字n
        while (L <= R) {
            //循环条件
            s++; //查找次数自增1
            mid = (L + R) / 2; //求中间值mid
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
        s1 = s1 + s; //累加组员猜数次数
        L = 1; //重新赋值左右值
        R = 1000000000;
        s = 0; //重新把组员猜数次数置0
    }
    cout << s1;
    return 0;
}
