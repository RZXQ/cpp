#include<bits/stdc++.h>
using namespace std;
//a数组标记，b数组存储质数，num质数数量
bool a[10000031];
int b[700000];
//欧拉筛
void prime(int n) {
    int num = 0;
    for (int i = 2; i <= n; i++) {
        //保存质数
        if (a[i] == 0) {
            b[num++] = i;
        }
        //遍历现有质数
        for (int j = 0; j < num; j++) {
            //合数超过最大范围
            if (i * b[j] > n) break;
            //标记合数
            a[i * b[j]] = 1;
            //后续质数不是合数的最小质因子
            if (i % b[j] == 0) break;
        }
    }
    return;
}

int main() {
    //找出数据范围内所有质数
    prime(10000030);
    int n, t;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        if (a[t] == 0) cout << t << endl;
        else {
            int x = t;
            int y = t;
            //双方向交替寻找质数
            while (1) {
                //向前找
                if (a[++x] == 0) {
                    cout << x << endl;
                    break;
                }
                //向后找
                if (a[--y] == 0) {
                    cout << y << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
