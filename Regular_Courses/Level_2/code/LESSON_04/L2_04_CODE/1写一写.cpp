#include<bits/stdc++.h>
using namespace std;

int main() {
    //L最小值 R最大值 mid中间值 ans结果 num被猜数
    int L = 1, R = 100, mid, num = 35;
    while (true) {
        //判断边界
        mid = (L + R) / 2; //取中间值
        if (mid == num) {
            //判断中间值是否等于炸弹
            cout << "猜对了"; //输出猜对了 
            break; //退出循环
        } else if (mid > num) {
            //判断中间值是否大于炸弹
            R = mid - 1; //调整最大范围
        } else {
            L = mid + 1; //调整最小范围
        }
    }
    return 0;
}
