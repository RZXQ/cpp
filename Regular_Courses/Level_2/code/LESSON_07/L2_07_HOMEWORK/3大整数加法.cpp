#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    //循环t次，计算t组数据
    for (int k = 1; k <= t; k++) {
        char a[31], b[31];
        int a1[31] = {}, b1[31] = {};
        int c1[31] = {}; //结果
        //1.当字符串输入
        cin >> a >> b;
        int la = strlen(a), lb = strlen(b);
        //2. 转换反转整数数组
        for (int i = 0; i < la; i++) {
            a1[la - 1 - i] = a[i] - 48;
        }
        for (int i = 0; i < lb; i++) {
            b1[lb - 1 - i] = b[i] - 48;
        }
        //3.对应位相加
        int lc = la > lb ? la : lb; //结果长度
        int x = 0; //进位
        for (int i = 0; i < lc; i++) {
            c1[i] = a1[i] + b1[i] + x; //3个数字相加
            x = c1[i] / 10; //更新进位(十位)
            c1[i] = c1[i] % 10; //更新当前位(个位)
        }
        //4. 处理最后的进位
        if (x != 0) {
            c1[lc] = x;
            lc++;
        }
        //5. 逆序输出
        for (int i = lc - 1; i >= 0; i--) {
            cout << c1[i];
        }
        cout << endl;
    }
    return 0;
}
