#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s; //读入二进制数
    int k = s.size() - 1; //计算出最高位位权的指数
    int n = 0; //累计位权展开的和
    for (int i = 0; i < s.size(); i++) {
        int t = s[i] - '0'; //取出数位上的数
        t = t * pow(2, k); //计算出当前数位上的数与位权的乘积
        n += t; //求和
        k--; //指数减1
    }
    cout << n;
    return 0;
}
