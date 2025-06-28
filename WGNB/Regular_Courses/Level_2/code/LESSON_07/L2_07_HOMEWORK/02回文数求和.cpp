#include<bits/stdc++.h>
using namespace std;
char a[2001];
//函数判断是否回文；回文返回true，否则返回false
bool prime() {
    int l = strlen(a);
    int i = 0, j = l - 1;
    while (i <= j) {
        if (a[i] != a[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    int a1[2001] = {}, b1[2001] = {};
    cin >> a;
    if (prime() == true) {
        //回文
        cout << "YES";
        return 0;
    }
    //不是回文
    int la = strlen(a);
    //反转转换个位在下标0对齐
    for (int i = 0; i < la; i++) {
        a1[la - i - 1] = a[i] - 48; //第1个加数：转换反转，存到整数数组a1
        b1[la - i - 1] = a[i] - 48; //第2个加数：转换反转，存到整数数组b1
    }
    //相同长度的a1和b1模拟有进位加法
    int c1[2001] = {}; //数字和
    int x = 0; //进位
    //模拟有进位加法
    for (int i = 0; i < la; i++) {
        c1[i] = a1[i] + b1[i] + x;
        x = c1[i] / 10;
        c1[i] = c1[i] % 10;
    }
    //处理最高位进位
    if (x != 0) {
        c1[la] = x;
        la++;
    }
    //处理完最高位进位后，和的最高位在下标la-1
    //逆序输出和
    for (int i = la - 1; i >= 0; i--) {
        cout << c1[i];
    }
    return 0;
}
