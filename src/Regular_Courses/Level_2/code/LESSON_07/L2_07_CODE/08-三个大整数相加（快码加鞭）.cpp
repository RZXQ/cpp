#include<bits/stdc++.h>
using namespace std;

int main() {
    //1.当字符串输入
    char a[2001], b[2001], c[2001];
    cin >> a >> b >> c;
    //2. 转换反转整数数组
    int la = strlen(a);
    int lb = strlen(b);
    int lc = strlen(c);
    int a1[2001] = {}, b1[2001] = {}, c1[2001] = {};
    for (int i = 0; i < la; i++) {
        a1[la - i - 1] = a[i] - 48;
    }
    for (int i = 0; i < lb; i++) {
        b1[lb - i - 1] = b[i] - 48;
    }
    for (int i = 0; i < lc; i++) {
        c1[lc - i - 1] = c[i] - 48;
    }
    //3.对应位相加
    int d1[2001] = {}; //结果
    int x = 0; //进位
    int ld = la > lb ? (la > lc ? la : lc) : (lb > lc ? lb : lc);
    for (int i = 0; i < ld; i++) {
        d1[i] = a1[i] + b1[i] + c1[i] + x;
        x = d1[i] / 10;
        d1[i] = d1[i] % 10;
    }
    //4. 处理最后的进位
    if (x != 0) {
        d1[ld] = x;
        ld++;
    }
    //5. 逆序输出
    for (int i = ld - 1; i >= 0; i--) {
        cout << d1[i];
    }
    return 0;
}
