#include<bits/stdc++.h>
using namespace std;

int main() {
    //创建数组a并初始化
    int a[51] = {};
    //创建变量n并输入
    int n;
    cin >> n;
    //1、1条直线分为2个区域（初始条件）
    a[1] = 2;
    //2、计算n条直线的区域总数（递推关系）
    for (int i = 2; i <= n; i++) {
        a[i] = a[i - 1] + i;
    }
    //3、输出区域总数：a[n]
    cout << a[n];
    return 0;
}
