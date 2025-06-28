#include<bits/stdc++.h>
using namespace std;
char a[102], b[202], c[202], d[202]; //4个加数
int a1[102] = {}, b1[202] = {}, c1[202] = {}, d1[202] = {};

int main() {
    //当字符串输入
    cin >> a >> b >> c >> d;
    int la = strlen(a), lb = strlen(b), lc = strlen(c), ld = strlen(d);
    //转换反转到整数数组
    for (int i = 0; i < la; i++) a1[la - 1 - i] = a[i] - 48;
    for (int i = 0; i < lb; i++) b1[lb - 1 - i] = b[i] - 48;
    for (int i = 0; i < lc; i++) c1[lc - 1 - i] = c[i] - 48;
    for (int i = 0; i < ld; i++) d1[ld - 1 - i] = d[i] - 48;
    //对应位相加
    int e1[202] = {}, x = 0; //进位x
    int t1 = la > lb ? la : lb;
    int t2 = lc > ld ? lc : ld;
    int le = t1 > t2 ? t1 : t2; //和的长度le
    for (int i = 0; i < le; i++) {
        e1[i] = a1[i] + b1[i] + c1[i] + d1[i] + x;
        x = e1[i] / 10;
        e1[i] = e1[i] % 10;
    }
    //处理最高位进位
    if (x != 0) {
        e1[le] = x;
        le++;
    }
    //逆序输出
    for (int i = le - 1; i >= 0; i--) {
        cout << e1[i];
    }
    return 0;
}
