#include<bits/stdc++.h>
using namespace std;

int main() {
    char a[101] = {}, b[101] = {};
    cin >> a >> b;
    //去除*号
    int lenb = strlen(b);
    for (int i = 0; i < lenb; i++) {
        if (b[i] == '*') b[i] = '5';
    }
    //倒序转整
    int lena = strlen(a);
    int a1[101] = {};
    for (int i = 0; i < lena; i++) {
        a1[lena - 1 - i] = a[i] - 48;
    }
    int b1[101] = {};
    for (int i = 0; i < lenb; i++) {
        b1[lenb - 1 - i] = b[i] - 48;
    }
    //求差
    int c1[101] = {};
    for (int i = 0; i < lena; i++) {
        c1[i] = a1[i] - b1[i];
    }
    //去前导0
    int k;
    for (k = lena - 1; k > 0; k--) {
        if (c1[k] != 0) {
            break;
        }
    }
    //输出结果
    for (int i = k; i >= 0; i--) {
        cout << c1[i];
    }
    return 0;
}
