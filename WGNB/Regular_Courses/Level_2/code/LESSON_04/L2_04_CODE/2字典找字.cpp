#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, s = 0, L = 15, R = 45, mid; //n:待查找页码 s:查找的次数 初始化最小值L最大值R
    cin >> n; //输入页码
    while (L <= R) {
        //循环条件
        mid = (L + R) / 2; //计算中间值
        s++; //查找次数+1
        if (mid == n) {
            //中间值等于n
            break;
        } else if (mid > n) {
            //中间值大于n
            R = mid - 1; //更新最大值R
        } else {
            //中间值小于n
            L = mid + 1; //更新最小值L
        }
    }
    cout << s; //输出查找次数
    return 0;
}
