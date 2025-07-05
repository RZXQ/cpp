#include <bits/stdc++.h>
using namespace std;
//定义func函数计算每排身高最高的同学
int func() {
    int a;
    //maxn记录每排最高的身高
    int maxn = 110;
    //循环接收输入进行比较
    for (int i = 1; i <= 10; i++) {
        cin >> a;
        maxn = max(a, maxn);
    }
    return maxn;
}

int main() {
    //接收输入的方阵排数
    int n;
    cin >> n;
    //循环接收每排的学生人数，调用func函数，计算每排的最高身高
    for (int i = 1; i <= n; i++) {
        cout << func() << endl;
    }
    return 0;
}
