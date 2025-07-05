#include <iostream>
using namespace std;

int main() {
    int sum, p, x;
    p = 1; //第几排
    x = 15; //这一排的座位数
    sum = x; //座位总数
    //循环输出
    while (sum <= 312) {
        cout << p << " " << x << " " << sum << endl;
        p++;
        x += 2;
        sum += x;
    }
    return 0;
}
