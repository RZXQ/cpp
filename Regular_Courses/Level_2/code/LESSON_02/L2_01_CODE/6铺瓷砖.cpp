#include<iostream>
using namespace std;

int main() {
    int n, a[45];
    cin >> n; //读入墙面的大小
    a[1] = 1; //墙面为1*1、只有一种方法
    a[2] = 2; //墙面为2*1、有两种方法铺瓷砖
    for (int i = 3; i <= n; i++) {
        a[i] = a[i - 1] + a[i - 2]; //递推关系式
    }
    cout << a[n] << endl; //输出铺设的方法数
    return 0;
}
