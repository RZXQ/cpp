#include <iostream>
using namespace std;

int main() {
    //接收输入的整数
    int n;
    cin >> n;
    int sum = 0; //记录累加和
    //循环运算
    while (n != 0) {
        sum += n % 10;
        n = n / 10;
    }
    cout << sum;
    return 0;
}
