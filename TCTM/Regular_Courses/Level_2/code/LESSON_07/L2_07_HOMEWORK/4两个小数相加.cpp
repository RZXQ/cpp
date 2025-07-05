#include<bits/stdc++.h>
using namespace std;
char a[31], b[31];
int a1[31] = {}, b1[31] = {};
int c1[31] = {};

int main() {
    //当字符串输入
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

    //对应位相加
    int lc = la;
    int x = 0; //进位
    for (int i = 0; i < lc; i++) {
        c1[i] = a1[i] + b1[i] + x; //3个数字相加
        x = c1[i] / 10; //更新进位(十位)
        c1[i] = c1[i] % 10; //更新当前位(个位)
    }
    //处理最后的进位
    if (x != 0) {
        c1[lc] = x;
        lc++;
    }

    //逆序输出
    for (int i = lc - 1; i >= 0; i--) {
        cout << c1[i];
        //当输出到下标ix时，多输出一个点，因为后面的数字都是小数位
        if (i == lx)
            cout << ".";
    }
    return 0;
}
