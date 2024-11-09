/*
Description
有一数字序列，它的规律是这样的：1 3 5 7 9…，相邻两数字之间相差2，这样的数字序列称为等差数列，现在需要输出序列中第n个数字，用递归完成。

Input
输入一个整数n。（1≤n≤100）

Output
一个整数，表示序列中第n个数。

Sample Input 1
6

Sample Output 1
11
*/
#include <iostream>
using namespace std;

int f(int n) {
    if (n == 1) {
        return 1;
    }
    return f(n - 1) + 2;
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
//输出等差序列第n个数
int f(int n) {
    if (n == 1)
        return 1;
    return f(n - 1) + 2;
}

int main() {
    int n = 0;
    cin >> n;
    cout << f(n);
    return 0;
}
*/
