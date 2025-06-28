#include <iostream>
using namespace std;
//定义func函数，计算i个a的值
int func(int a, int i) {
    int s = 0;
    for (int j = 0; j < i; j++) {
        s = s * 10 + a;
    }
    return s;
}

int main() {
    //接收键盘输入的两个正整数
    int a, n;
    cin >> a >> n;
    //计算n个加数相加的结果
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        //调用func函数计算每个加数，进行累加
        sum += func(a, i);
    }
    cout << sum;
    return 0;
}
