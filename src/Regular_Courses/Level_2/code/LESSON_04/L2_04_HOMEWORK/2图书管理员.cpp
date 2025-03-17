#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[3][2] = {1, 36, 1, 15, 5, 26}, L, R, mid, cnt = 0, num;
    for (int i = 0; i < 3; i++) {
        //3层书架
        L = a[i][0]; //确定边界
        R = a[i][1];
        cin >> num; //输入要查找的数
        cnt = 0; //次数重置
        while (L <= R) {
            //判断边界
            cnt++; //统计次数
            mid = (L + R) / 2; //取中间值
            if (mid == num) {
                //判断中间值是否等于被猜数
                cout << cnt << " ";
                break; //退出循环
            } else if (mid > num) {
                //判断中间值是否大于被猜数
                R = mid - 1; //调整最大范围
            } else {
                L = mid + 1; //调整最小范围
            }
        }
    }
    return 0;
}
