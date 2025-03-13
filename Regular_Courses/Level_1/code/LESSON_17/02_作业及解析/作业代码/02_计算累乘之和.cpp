#include <iostream>
using namespace std;
//1、定义函数mul,计算1~n之间整数的累乘结果
int mul(int n) {
    int s = 1;
    for (int i = 1; i <= n; i++) {
        s *= i;
    }
    return s;
}

int main() {
    //2、接收输入的三个整数
    int x, y, z;
    cin >> x >> y >> z;
    //3、调用函数，计算1~x,1~y,1~z之间整数累乘结果之和
    int r = mul(x) + mul(y) + mul(z);
    cout << r;
    return 0;
}
