#include<bits/stdc++.h>
using namespace std;

int main() {
    //1.输入两个整数a,b
    char a[1001]; //大整数
    int b; //小整数
    cin >> a >> b;
    //2.大整数转换反转到整数数组
    int la = strlen(a);
    int a1[1001] = {};
    for (int i = 0; i < la; i++) {
        a1[la - 1 - i] = a[i] - 48;
    }
    //3.数组a1的元素依次乘以b
    int c1[1011] = {}, x = 0; //c1存乘积,x存进位
    for (int i = 0; i < la; i++) {
        c1[i] = a1[i] * b + x;
        x = c1[i] / 10;
        c1[i] = c1[i] % 10;
    }
    //4.拆分存储最后的进位
    while (x > 0) {
        c1[la] = x % 10;
        x = x / 10;
        la++;
    }
    //5.逆序输出
    for (int i = la - 1; i >= 0; i--) {
        cout << c1[i];
    }
    return 0;
}
