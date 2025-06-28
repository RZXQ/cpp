#include<bits/stdc++.h>
using namespace std;

int main() {
    //a、b、c、d用于存储拆分数字 num存储遍历的4位数
    int a, b, c, d, num;
    //判断范围
    for (int i = 1000; i <= 9999; i++) {
        num = i; //待拆分数字
        //拆分数字
        a = num / 1000;
        b = num / 100 % 10;
        c = num / 10 % 10;
        d = num % 10;
        //判断是否满足水仙花数条件
        if (a * a * a * a + b * b * b * b + c * c * c * c + d * d * d * d == num) {
            cout << num << " "; //输出
        }
    }
    return 0;
}
