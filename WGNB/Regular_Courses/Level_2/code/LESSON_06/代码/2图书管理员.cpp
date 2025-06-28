#include<bits/stdc++.h>
using namespace std;

int main() {
    int L = 1, R = 1000, mid, cnt = 0, num;
    cin >> num; //输入图书编号
    while (L <= R) {
        mid = (L + R) / 2; //取中间值
        cnt++; //记录比较次数
        if (mid == num) {
            //找到目标
            break;
        } else if (mid > num) {
            //目标在中间值左侧
            R = mid - 1;
        } else {
            //目标在中间值右侧
            L = mid + 1;
        }
    }
    cout << cnt; //输出比较次数
    return 0;
}
