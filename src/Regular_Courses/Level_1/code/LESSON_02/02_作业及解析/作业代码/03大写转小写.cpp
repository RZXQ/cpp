#include <iostream>
using namespace std;

int main() {
    //1、创建char类型的变量，接收输入的大写字母
    char c;
    cin >> c;
    //2、将大写字母转为小写字母
    c = c + 32;
    //3、输出结果
    cout << c;
    return 0;
}
