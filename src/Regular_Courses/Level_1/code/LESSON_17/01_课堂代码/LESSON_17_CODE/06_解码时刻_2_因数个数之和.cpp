#include <iostream>
using namespace std;
//1、定义函数func,计算一个整数有多少个因数
int func(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            s++;
    }
    return s;
}

int main() {
    int sum = 0;
    int k;
    //2、循环接收四个整数
    for (int i = 1; i <= 4; i++) {
        cin >> k;
        //2、调用func函数，计算每个整数的因数个数，进行累加
        sum += func(k);
    }
    cout << sum << endl;
    return 0;
}
