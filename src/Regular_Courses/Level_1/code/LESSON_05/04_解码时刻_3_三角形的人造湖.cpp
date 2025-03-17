#include <iostream>
using namespace std;

int main() {
    //1、接收输入的三个正整数
    int a, b, c;
    cin >> a >> b >> c;
    //2、判断是否为三角形
    if (a + b > c && a + c > b && b + c > a) {
        //3、判断是否为等腰三角形
        if (a == b || a == c || b == c) cout << "YES";
        else cout << "NO";
    } else cout << "NO";
    return 0;
}
