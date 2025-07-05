#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    int len = str.size(); //表达式长度

    //提取整数n
    //1、k1存储n最高位下标，k2存储个位下标
    int k1 = len - 2, k2 = len - 2;
    while ((str[k1] >= '0' && str[k1] <= '9') && k1 >= 0)
        k1--;
    k1++;
    //2、利用k1~k2计算整数n
    int n = 0;
    for (int i = k1; i <= k2; i++)
        n = n * 10 + (str[i] - 48);

    //计算1!+2!+...+n!
    int s1[50001] = {}, ls = 0, x1 = 0; //累加
    int c1[50001] = {1}, lc = 1, x = 0; //阶乘
    for (int i = 1; i <= n; i++) {
        //计算i(1~n)的阶乘
        for (int j = 0; j < lc; j++) {
            c1[j] = c1[j] * i + x;
            x = c1[j] / 10;
            c1[j] = c1[j] % 10;
        }
        while (x > 0) {
            c1[lc] = x % 10;
            x = x / 10;
            lc++;
        }
        //x2=0;

        //1.计算和的长度
        ls = ls > lc ? ls : lc;
        //2.将c1的元素对位累加进s1
        for (int k = 0; k < ls; k++) {
            s1[k] = s1[k] + c1[k] + x1;
            x1 = s1[k] / 10;
            s1[k] = s1[k] % 10;
        }
        //3.处理最后相加的进位
        if (x1 != 0) {
            s1[ls] = x1;
            ls++;
        }
        x1 = 0;
    }
    //逆序输出
    for (int i = ls - 1; i >= 0; i--) {
        cout << s1[i];
    }
    return 0;
}
