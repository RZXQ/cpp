/*
Description
一只青蛙上台阶，它一次可以跳一层台阶或两层台阶。请问它上n层台阶有多少种跳法。

Input
输入一个整数n，表示台阶数。（1≤n≤20）

Output
一个整数，表示跳法的数量。

Sample Input 1
5

Sample Output 1
8
*/
#include <iostream>
using namespace std;
int a[505];

long long f(long long n) {
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
//递归
long long f(long long n) {
    //递归出口
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    //递归转换公式
    return f(n - 1) + f(n - 2);
}

int main() {
    int n = 0;
    cin >> n; //输入台阶数量
    cout << f(n); //求n阶台阶的走法数
    return 0;
}
*/
