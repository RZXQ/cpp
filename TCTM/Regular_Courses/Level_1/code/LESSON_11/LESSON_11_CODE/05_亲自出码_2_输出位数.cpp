#include <iostream>
using namespace std;

int main() {
    //接收输入的整数
    int n;
    cin >> n;
    int cnt = 0; //记录数字位数
    //循环计算
    while (n != 0) {
        n = n / 10;
        cnt++;
    }
    cout << cnt;
    return 0;
}
