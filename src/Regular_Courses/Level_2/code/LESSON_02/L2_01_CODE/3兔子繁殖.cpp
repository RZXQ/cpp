#include<bits/stdc++.h>
using namespace std;

int main() {
    //创建数组a,并初始化
    int a[41] = {};
    //定义变量n，并输入
    int n;
    cin >> n;
    //1、1月,2月兔子总数都为1对（初始条件）
    a[1] = 1; //1月总数1对
    a[2] = 1; //2月总数1对
    //2、计算第n月兔子总数（递推关系）
    for (int i = 3; i <= n; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }
    //3、输出第n月总数：a[n]
    cout << a[n];
    return 0;
}
