#include<iostream>
using namespace std;

int main() {
    int a[21] = {}, n; //n：n个台阶
    a[1] = 1;
    a[2] = 2; //1个台阶1种方法 2个台阶2种方法
    cin >> n;
    for (int i = 3; i <= n; i++) {
        //第3个台阶到第n个台阶
        a[i] = a[i - 1] + a[i - 2]; //递推关系式 推导每个台阶有多少种方法
    }
    cout << a[n]; //输出n个台阶的总方法数
    return 0;
}
