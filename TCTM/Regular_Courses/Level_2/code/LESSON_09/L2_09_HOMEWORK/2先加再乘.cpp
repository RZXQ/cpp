#include<bits/stdc++.h>
using namespace std;
char a[205], b[205], c[205];
int a1[205] = {}, b1[205] = {}, c1[205] = {};

int main() {
    //当字符串输入
    cin >> a >> b >> c;
    int la = strlen(a), lb = strlen(b), lc = strlen(c);

    //计算(a+b)的和
    for (int i = 0; i < la; i++) a1[la - 1 - i] = a[i] - 48;
    for (int i = 0; i < lb; i++) b1[lb - 1 - i] = b[i] - 48;
    int ld = la > lb ? la : lb; //和的长度
    int d1[205] = {}, x1 = 0; //d1保存和，x1进位
    for (int i = 0; i < ld; i++) {
        d1[i] = a1[i] + b1[i] + x1;
        x1 = d1[i] / 10;
        d1[i] = d1[i] % 10;
    }
    if (x1 != 0) {
        d1[ld] = x1;
        ld++;
    }

    for (int i = 0; i < lc; i++) c1[lc - 1 - i] = c[i] - 48;
    //计算d*c的积
    int e1[500] = {}, x2 = 0; //保存积，注意数组的大小
    //d1的长度ld，c1的长度lc
    for (int i = 0; i < lc; i++) {
        //第2个因数
        for (int j = 0; j < ld; j++) {
            //第1个因数
            e1[j + i] = e1[j + i] + d1[j] * c1[i] + x2;
            x2 = e1[j + i] / 10;
            e1[j + i] = e1[j + i] % 10;
        }
        e1[i + ld] = x2;
        x2 = 0;
    }

    int le = ld + lc - 1;
    if (e1[le] != 0) {
        le++;
    }

    //逆序输出
    for (int i = le - 1; i >= 0; i--)
        cout << e1[i];
    return 0;
}
