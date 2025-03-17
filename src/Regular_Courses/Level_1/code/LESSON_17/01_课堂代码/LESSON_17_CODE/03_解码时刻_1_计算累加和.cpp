#include <iostream>
using namespace std;
//1、定义函数sum，求1~n之间的整数累加和
void sum(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    cout << s << endl;
}

int main() {
    //2、接收输入的3个正整数
    int x, y, z;
    cin >> x >> y >> z;
    //3、调用三次sum函数
    sum(x);
    sum(y);
    sum(z);
    return 0;
}
