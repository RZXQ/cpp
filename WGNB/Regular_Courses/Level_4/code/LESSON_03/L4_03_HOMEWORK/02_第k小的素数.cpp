#include<bits/stdc++.h>
using namespace std;
//a数组标记，b数组存储质数，num质数数量
bool a[100000001];
int b[6000001], num = 0;

void prime(int n) {
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
    //n范围 m查询数量
    int n, m;
    cin >> n >> m;
    prime(n);
    while (m--) {
        //输出第k个质数
        int k;
        cin >> k;
        cout << b[k - 1] << endl;
    }
    return 0;
}
