#include<bits/stdc++.h>
using namespace std;

int main() {
    char a[31], b[31];
    int a1[31] = {}, b1[31] = {};
    cin >> a >> b;
    int la = strlen(a);

    //确定小数点下标
    int index = 0;
    for (int i = 0; i < la; i++) {
        if (a[i] == '.') {
            index = i;
            break;
        }
    }
    int lx = la - index - 1; //小数的长度

    //去掉小数点：从index+1开始都向前移动一位
    for (int i = index + 1; i < la; i++) {
        a[i - 1] = a[i];
        b[i - 1] = b[i];
    }
    la--; //去掉小数点，长度减1

    //转换反转整数数组
    for (int i = 0; i < la; i++) {
        a1[la - 1 - i] = a[i] - 48;
        b1[la - 1 - i] = b[i] - 48;
    }

    //模拟整数乘法
    int c1[51] = {};
    int x = 0;
    for (int i = 0; i < la; i++) {
        //第2个因数
        for (int j = 0; j < la; j++) {
            //第1个因数
            c1[j + i] = c1[j + i] + a1[j] * b1[i] + x;
            x = c1[j + i] / 10;
            c1[j + i] = c1[j + i] % 10;
        }
        c1[i + la] = x;
        x = 0;
    }
    int lc = la + la - 1;
    if (c1[lc] != 0) {
        lc++;
    }

    //逆序输出
    for (int i = lc - 1; i >= 0; i--) {
        cout << c1[i];
        //因数小数位长度lx，积小数位长度lx*2
        if (i == (lx * 2))
            cout << ".";
    }
    return 0;
}
