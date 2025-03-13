#include<iostream>
using namespace std;
int n, p, q; //n:分数个数 p:分子 q:分母
char c; //字符/    
int a = 0, b = 1; //a:分子通分的值 b:分母通分的值
int gcd(int x, int y) {
    if (x % y == 0) return y;
    return gcd(y, x % y);
}

int main() {
    cin >> n;
    while (n--) {
        cin >> p >> c >> q; //一个分数
        a = a * q + p * b;
        b = b * q;
        int x = gcd(a, b); //求a、b最大公约数
        a /= x, b /= x;
    }
    if (a % b == 0) cout << a;
    else cout << a << '/' << b;
    return 0;
}
