#include <iostream>
using namespace std;

int main() {
    //1、创建char类型的变量，接收输入字母
    char c;
    cin >> c;
    //2、计算字母的邻居
    char m = c - 2; //前面第2个字母
    char n = c - 1; //前面第1个字母
    char p = c + 1; //后面第1个字母
    char q = c + 2; //后面第2个字母
    //3、输出
    cout << m << " " << n << " " << p << " " << q;
    return 0;
}
