#include<bits/stdc++.h>
using namespace std;

int main() {
    //a学校时间 b补习时间 t为a+b max_最大时间 num记录星期
    int a, b, t, max_ = 0, num = 0;
    //星期一到星期日
    for (int i = 1; i <= 7; i++) {
        cin >> a >> b; //输入时间
        t = a + b; //一天的总时间
        if (t > 8 && t > max_) {
            //大于8的同时是最大值
            max_ = t; //最大值有多个时只存储第一个
            num = i; //存储星期编号
        }
    }
    cout << num; //输出星期编号
    return 0;
}
