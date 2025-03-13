#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++) {
        //1.当字符串输入
        char a[105], b[105];
        cin >> a >> b;
        int la = strlen(a), lb = strlen(b);
        //2.转换反转到整数数组
        int a1[105] = {}, b1[105] = {};
        for (int i = 0; i < la; i++) {
            a1[la - 1 - i] = a[i] - 48;
        }
        for (int i = 0; i < lb; i++) {
            b1[lb - 1 - i] = b[i] - 48;
        }
        //3.模拟整数乘法
        int c1[205] = {};
        int x = 0;
        for (int i = 0; i < lb; i++) {
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
        //4.最后的进位非0，长度加1
        int lc = la + lb - 1;
        if (c1[lc] != 0) {
            lc++;
        }
        //5.逆序输出
        for (int i = lc - 1; i >= 0; i--) {
            cout << c1[i];
        }
        cout << endl; //换行
    }
    return 0;
}
