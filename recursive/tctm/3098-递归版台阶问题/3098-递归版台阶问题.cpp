/*
Description
小鹿上楼梯，一步可以迈1个台阶或者2个台阶，现共有n个台阶，请编写程序计算小鹿上到第n个台阶共有几种走法。

Input
一个整数n，表示共有的台阶数量。（1<n<20）

Output
一个整数，表示小鹿上到第n个台阶的总走法数。

Sample Input 1
4

Sample Output 1
5
*/
#include <iostream>
using namespace std;

int f(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    return f(n - 1) + f(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << f(n) << endl;
}

/*
标准答案:
#include<bits/stdc++.h>
using namespace std;
//递归台阶问题
long long step(long long n) {
    if (n == 1) //递归出口
        return 1;
    if (n == 2) //递归出口
        return 2;
    //转换公式
    return step(n - 1) + step(n - 2);
}

int main() {
    int n = 0;
    cin >> n; //设置台阶数量
    cout << step(n); //n阶台阶的走法数
    return 0;
}
*/
