#include <iostream>
using namespace std;
//1、定义sum函数，计算等差数列前n项的和
void sum(int x, int n) {
    //等差数列第一个数字为2
    int a = 2;
    //统计前n项的和
    int s = 2;
    //遍历除第1项以外的其他项，累加求和
    for (int i = 1; i <= n - 1; i++) {
        a += x;
        s += a;
    }
    cout << s << endl;
}

int main() {
    //2、接收输入的数列差值x，数列项数n
    int p, q;
    cin >> p >> q;
    //3、调用函数，传入实参
    sum(p, q);
    return 0;
}
