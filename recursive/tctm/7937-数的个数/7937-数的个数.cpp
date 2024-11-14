/*
Description
我们要求找出具有下列性质数的个数（包括输入的自然数 n）。先输入一个自然数 n（ n≤100 ），然后对此自然数按照如下方法进行处理：
不作任何处理；
在它的左边加上一个正整数，但该正整数不能超过原数的一半；
加上数后，继续按此规则进行处理，直到不能再加正整数为止。

Input
正整数 n（n≤100）。

Output
满足条件数的个数。

Sample Input 1
6

Sample Output 1
6

Hint
数据范围与提示
1<n≤100

样例解释
满足条件的数为如下所示：
6
16
26
126
36
136
*/
#include <iostream>
using namespace std;

int cnt = 1;

void f(int x) {
    for (int i = 1; i <= x / 2; i++) {
        cnt++;
        f(i);
    }
}

int main() {
    int n;
    cin >> n;
    f(n);
    cout << cnt;
}
