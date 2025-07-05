#include<bits/stdc++.h>
using namespace std;

int main() {
    //1.当字符串输入
    char a[21], b[21];
    cin >> a >> b;
    //2. 转换反转整数数组
    int la = strlen(a), lb = strlen(b);
    int a1[21] = {}, b1[21] = {};
    for (int i = 0; i < la; i++) {
        a1[la - 1 - i] = a[i] - 48;
    }
    for (int i = 0; i < lb; i++) {
        b1[lb - 1 - i] = b[i] - 48;
    }
    //3.对应位相加
    int lc = la > lb ? la : lb;
    int c1[21] = {};
    int x = 0;
    for (int i = 0; i < lc; i++) {
        c1[i] = a1[i] + b1[i] + x;
        x = c1[i] / 10;
        c1[i] = c1[i] % 10;
    }
    //4. 逆序输出
    for (int i = lc - 1; i >= 0; i--) {
        cout << c1[i];
    }
    return 0;
}
