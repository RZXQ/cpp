#include <iostream>
using namespace std;

int main() {
    //接收输入的整数
    int n;
    cin >> n;
    //循环计算n的值
    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 1)
            n = n * 3 + 1;
        else
            n = n / 2;
    }
    //输出n最后的值
    cout << n;
    return 0;
}
