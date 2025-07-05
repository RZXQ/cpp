#include<bits/stdc++.h>
using namespace std;

int main() {
    //1.当字符串输入
    char a[1001], b[1001];
    int c;
    cin >> a >> b >> c;
    //2.转换反转到整数数组
    int la = strlen(a), lb = strlen(b);
    int a1[1001] = {}, b1[1001] = {};
    for (int i = 0; i < la; i++) {
        a1[la - 1 - i] = a[i] - 48;
    }
    for (int i = 0; i < lb; i++) {
        b1[lb - 1 - i] = b[i] - 48;
    }
    //3.模拟整数乘法
    int c1[2001] = {}, x = 0;
    for (int i = 0; i < lb; i++) {
        //第2个整数
        for (int j = 0; j < la; j++) {
            //第1个整数
            c1[j + i] = c1[j + i] + a1[j] * b1[i] + x;
            x = c1[j + i] / 10;
            c1[j + i] = c1[j + i] % 10;
        }
        c1[i + la] = x; //存储进位
        x = 0; //进位重新赋0
    }
    //4.最后的进位非0，长度加1
    int lc = la + lb - 1;
    if (c1[lc] != 0) {
        lc++;
    }
    //5.统计并输出结果
    int res = 0; //存储结果并初始化0
    for (int i = lc - 1; i >= 0; i--) {
        if (c1[i] == c)
            res++;
    }
    cout << res;
    return 0;
}
