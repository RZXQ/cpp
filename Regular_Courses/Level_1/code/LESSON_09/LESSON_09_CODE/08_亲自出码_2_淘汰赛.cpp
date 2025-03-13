#include <iostream>
using namespace std;

int main() {
    //输入选手人数
    int n;
    cin >> n;
    //循环输入每名选手分数，并寻找最低分和它的下标
    int a[51] = {0};
    int mini = 1;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[mini] > a[i])
            mini = i;
    }
    //删除最低分
    for (int i = mini + 1; i <= n; i++)
        a[i - 1] = a[i];
    //输出剩余选手分数
    for (int i = 1; i <= n - 1; i++)
        cout << a[i] << " ";
    return 0;
}
