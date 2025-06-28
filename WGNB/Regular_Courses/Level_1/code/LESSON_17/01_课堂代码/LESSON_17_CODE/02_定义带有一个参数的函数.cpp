#include <iostream>
using namespace std;
//定义bigger函数，将数字翻2倍
void bigger(int a) {
    a *= 2;
    cout << a << endl;
}

int main() {
    //调用bigger函数，传入不同的参数
    bigger(4);
    bigger(13);
    bigger(24);
    return 0;
}
