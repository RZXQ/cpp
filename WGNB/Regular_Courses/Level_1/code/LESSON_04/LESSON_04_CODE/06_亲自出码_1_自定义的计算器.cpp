#include <iostream>
using namespace std;

int main() {
    //1、接收输入的两个数字和一个字符
    int x, y;
    char c;
    cin >> x >> c >> y;
    //2、根据输入的运算符号，判断要进行哪种运算
    switch (c) {
        case '+': cout << x + y << endl;
            break;
        case '-': cout << x - y << endl;
            break;
        case '*': cout << x * y << endl;
            break;
        case '/': cout << x / y << endl;
            break;
        case '%': cout << x % y << endl;
            break;
    }
    return 0;
}
