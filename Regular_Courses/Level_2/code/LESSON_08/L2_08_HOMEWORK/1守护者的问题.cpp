#include<bits/stdc++.h>
using namespace std;

int main() {
    //1. 当字符串输入
    char a[501], b[501];
    cin >> a >> b;
    //2. 处理被减数小于减数
    int la = strlen(a), lb = strlen(b);
    if ((la < lb) || (la == lb && strcmp(a, b) < 0)) {
        swap(a, b);
        swap(la, lb);
        cout << "-";
    }
    //3. 转换反转整数数组
    int a1[501] = {}, b1[501] = {};
    for (int i = 0; i < la; i++) {
        a1[la - 1 - i] = a[i] - 48;
    }
    for (int i = 0; i < lb; i++) {
        b1[lb - 1 - i] = b[i] - 48;
    }
    //4. 对应位相减
    int c1[501] = {}; //存储差
    for (int i = 0; i < la; i++) {
        if (a1[i] < b1[i]) {
            a1[i + 1]--;
            a1[i] = a1[i] + 10;
        }
        c1[i] = a1[i] - b1[i];
    }
    //5. 去除前导0
    int k;
    for (k = la - 1; k > 0; k--) {
        if (c1[k] != 0) {
            break;
        }
    }
    //6. 逆序输出
    for (int i = k; i >= 0; i--) {
        cout << c1[i];
    }
    return 0;
}
