#include<bits/stdc++.h>
using namespace std;
int a[500010] = {}; //原数组
int s[500010] = {}; //前缀和数组
int main() {
    int n, K;
    cin >> n >> K;
    //1.输入n个元素; 注意从下标1开始使用
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    //2.循环推导前缀和
    s[1] = a[1];
    for (int i = 2; i <= n; i++) {
        s[i] = s[i - 1] + a[i];
    }
    //3.遍历所有长度K的区间
    //先计算区间和，再取最大的区间和
    int res = 0; //最大区间和
    int b, e; //起点下标b，终点下标e
    for (int i = K; i <= n; i++) {
        //终点下标:i
        //起点的前1个下标:i-K
        int t = s[i] - s[i - K];
        if (t > res) {
            res = t;
            b = i - K + 1;
            e = i;
        }
    }
    //4.输出结果
    cout << res << endl;
    cout << b << " " << e << endl;
    return 0;
}
