#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    //循环t次，处理t组数据
    for (int h = 1; h <= t; h++) {
        char a[105], b[105];
        int a1[105] = {}, b1[105] = {};
        //1. 当字符串输入
        cin >> a >> b;
        int la = strlen(a), lb = strlen(b);
        //2. 处理被减数小于减数
        if ((la < lb) || (la == lb && strcmp(a, b) < 0)) {
            swap(a, b);
            swap(la, lb);
            cout << "-";
        }
        //3. 转换反转整数数组
        for (int i = 0; i < la; i++) {
            a1[la - 1 - i] = a[i] - 48;
        }
        for (int i = 0; i < lb; i++) {
            b1[lb - 1 - i] = b[i] - 48;
        }
        //4. 对应位相减
        int c1[105] = {}; //结果
        int lc = la; //结果长度
        for (int i = 0; i < lc; i++) {
            if (a1[i] < b1[i]) {
                //处理借位
                a1[i + 1]--;
                a1[i] = a1[i] + 10;
            }
            c1[i] = a1[i] - b1[i];
        }
        //5. 去除前导0
        int k;
        for (k = lc - 1; k > 0; k--) {
            if (c1[k] != 0) {
                break;
            }
        }
        //6. 逆序输出
        for (int i = k; i >= 0; i--) {
            cout << c1[i];
        }

        cout << endl; //换行
    }
    return 0;
}
