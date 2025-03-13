#include <iostream>
using namespace std;

int main() {
    //输入学生人数
    int n;
    cin >> n;
    //接收n名同学的成绩保存至数组
    int a[100] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    //输入要查询的学生学号
    int id;
    cin >> id;
    //输入该名学生的成绩
    cout << a[id - 1];


    return 0;
}
