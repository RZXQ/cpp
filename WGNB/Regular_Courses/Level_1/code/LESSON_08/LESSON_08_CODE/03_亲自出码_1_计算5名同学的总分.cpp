#include <iostream>
using namespace std;

int main() {
    //1、接收用户输入的学生分数
    int a[5];
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    //2、计算5名学生的总分
    int s = a[0] + a[1] + a[2] + a[3] + a[4];
    cout << s;


    return 0;
}
