#include <iostream>
using namespace std;

int main() {
    // 函数的声明
    int bigger(int);
    // 直接输出函数的返回值
    cout << bigger(5) << endl;
    // 使用变量保存函数的返回值
    int s = bigger(5);
    cout << s << endl;
    // 参与其他运算
    s = bigger(5) + bigger(3);
    cout << s;
    return 0;
}

int bigger(int a) {
    a *= 2;
    return a;
}
