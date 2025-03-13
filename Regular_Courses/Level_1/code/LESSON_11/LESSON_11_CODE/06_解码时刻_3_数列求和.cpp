#include <iostream>
using namespace std;

int main() {
    //接受输入的n值
    int n;
    cin >> n;
    //定义i的初始值为1
    int i = 1;
    //循环累加判断
    int s = 0;
    do {
        s += i;
        i++;
    } while (s <= n);
    //输出
    cout << i - 1;
    return 0;
}
