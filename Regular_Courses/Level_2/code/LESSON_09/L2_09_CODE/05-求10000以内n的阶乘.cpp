#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    //1.准备数组存储累乘
    int c1[50001] = {1};
    int lc = 1; //结果长度
    //2.遍历小整数1~n
    for (int i = 1; i <= n; i++) {
        //3.大整数c1乘以小整数i
        int x = 0; //进位
        for (int j = 0; j < lc; j++) {
            c1[j] = c1[j] * i + x;
            x = c1[j] / 10;
            c1[j] = c1[j] % 10;
        }
        //拆分存储最后的进位
        while (x > 0) {
            c1[lc] = x % 10;
            x = x / 10;
            lc++;
        }
        //注意：下标lc未使用，结果逆序从下标lc-1输出
    }
    //4.逆序输出
    for (int i = lc - 1; i >= 0; i--) {
        cout << c1[i];
    }
    return 0;
}
