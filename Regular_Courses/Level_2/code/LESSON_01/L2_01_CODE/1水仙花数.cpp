#include<bits/stdc++.h>
using namespace std;

int main() {
    //a、b、c用于存储拆分数字 num存储遍历的3位数
    int a, b, c, num;
    //判断范围
    for (int i = 100; i <= 999; i++) {
        num = i; //待拆分数字
        //拆分数字
        a = num / 100;
        b = num / 10 % 10;
        c = num % 10;
        //判断是否满足水仙花数条件
        if (a * a * a + b * b * b + c * c * c == num) {
            cout << num << " "; //输出
        }
    }
    return 0;
}
