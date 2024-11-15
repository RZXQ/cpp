/*
Description
给出一个正整数 a，要求分解成若干个正整数的乘积，即 a=a1×a2×a3×...×an

并且 1<a1≤a2≤a3...≤an 问这样的分解的种数有多少。注意 a=a 也是一种分解

Input
一个正整数 a(1<a<32768)。

Output
一个正整数，表示满足条件的分解种数。

Sample Input 1
24

Sample Output 1
7
*/
#include <iostream>
using namespace std;

int ans = 1; // 最初的整数满足条件, ans 初始为 1

void f(int x, int y) {
    // 从 x 开始分解 y
    for (int i = x; i <= y; i++) {
        // 列觉每个可能的因子
        if (y % i == 0 && i <= y / i) {
            ans++; // 递进 1 次数量加 1
            f(i, y / i);
        }
    }
}

int main() {
    int a; // 要分解的正整数
    cin >> a;
    f(2, a); // 分解最初的整数从 2 开始
    cout << ans;
    return 0;
}
