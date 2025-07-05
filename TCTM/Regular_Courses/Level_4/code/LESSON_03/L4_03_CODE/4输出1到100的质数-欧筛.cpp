#include<bits/stdc++.h>
using namespace std;

int main() {
    //a数组标记，b数组存储质数，num质数数量
    int a[110] = {1, 1}, b[110] = {}, num = 0;
    for (int i = 2; i <= 100; i++) {
        //保存质数
        if (a[i] == 0) {
            b[num++] = i;
        }
        //遍历现有质数
        for (int j = 0; j < num; j++) {
            //合数超过最大范围
            if (i * b[j] > 100) break;
            //标记合数
            a[i * b[j]] = 1;
            //质数不是合数的最小质因子
            if (i % b[j] == 0) break;
        }
    }
    for (int i = 2; i <= 100; i++) {
        if (a[i] == 0) {
            cout << i << " ";
        }
    }
    return 0;
}
