#include<bits/stdc++.h>
using namespace std;

int main() {
    char a[2001], b[2001], c[2001];
    cin >> a >> b >> c;
    //加法：数位相同没有进位
    int la = strlen(a);
    int a1[2001] = {}, b1[2001] = {};
    for (int i = 0; i < la; i++) {
        a1[la - 1 - i] = a[i] - 48;
        b1[la - 1 - i] = b[i] - 48;
    }
    int t1[2001] = {};
    for (int i = 0; i < la; i++) {
        t1[i] = a1[i] + b1[i];
    }

    //减法：被减数t1大于等于减数c1
    int lc = strlen(c);
    int c1[2001] = {};
    for (int i = 0; i < lc; i++) {
        c1[lc - 1 - i] = c[i] - 48;
    }
    //按位相减
    int d1[2001] = {}; //结果
    for (int i = 0; i < la; i++) {
        if (t1[i] < c1[i]) {
            //处理借位
            t1[i + 1]--;
            t1[i] = t1[i] + 10;
        }
        d1[i] = t1[i] - c1[i];
    }
    //去除前导0
    int k;
    for (k = la - 1; k > 0; k--) {
        if (d1[k] != 0) {
            break;
        }
    }
    //逆序输出
    for (int i = k; i >= 0; i--) {
        cout << d1[i];
    }
    return 0;
}
