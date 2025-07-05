#include <iostream>
using namespace std;

int readint() {
    int num = 0; // 存储读取到的整数
    int negative = 0; // 负数标识
    char c; // 存储当前读取到的字符
    c = cin.get();
    while ((c < '0' || c > '9') && c != '-')
        c = cin.get(); //1
    if (c == '-')
        negative = 1;
    else
        num = c - '0'; //2
    c = cin.get();
    while (c >= '0' && c <= '9') {
        //3
        num = num * 10 + c - 48;
        c = cin.get();
    }
    if (negative == 1)
        num = -num;
    return num;
}

int main() {
    int a, b;
    a = readint();
    b = readint();
    cout << a << endl << b << endl;
    return 0;
}
