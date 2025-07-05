#include <iostream>
using namespace std;

int main() {
    //1、键盘接收5名学生的分数
    int a[5];
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    //2、根据用户输入的学号查询分数
    int id;
    cin >> id;
    cout << a[id - 1];
    return 0;
}
