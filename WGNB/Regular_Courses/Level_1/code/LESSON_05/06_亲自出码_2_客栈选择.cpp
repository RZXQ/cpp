#include <iostream>
using namespace std;

int main() {
    //1、接收用户输入的预算和色调
    int m;
    char c;
    cin >> m >> c;
    //2、创建整型变量保存客栈编号
    int x;
    //3、根据预算选择客栈
    if (m >= 200) {
        //4、根据色调进一步选择
        if (c == 'b') x = 1;
        else x = 2;
    } else if (m >= 100) {
        if (c == 'b') x = 4;
        else x = 3;
    } else {
        if (c == 'b') x = 5;
        else x = 6;
    }
    //5、输出最终选择的客栈编号
    cout << x << endl;
    return 0;
}
