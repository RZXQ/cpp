/*
Description
什么是阶乘呢？比如5的阶乘可以写作5！(读作：5的阶乘)。它表示的意思就是1×2×3×4×5，所以5！等于120。现在用递归求n！，将结果输出。

Input
一个整数n。（1≤n≤10）

Output
一个整数，n！的结果。

Sample Input 1
6

Sample Output 1
720
*/
#include <iostream>
using namespace std;

long long f(long long n) {
    if (n == 1) {
        return 1;
    }
    return n * f(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << f(n) << endl;
}

/*
标准代码:
#include<iostream>
using namespace std;
//递归计算阶乘
long long fac(long long n) {
    if (n == 1)
        return 1;
    return fac(n - 1) * n;
}

int main() {
    int n = 0;
    cin >> n;
    cout << fac(n);
    return 0;
}
*/