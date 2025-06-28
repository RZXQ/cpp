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
    //3.遍历所有长度K的区间；计算输出区间和
    for (int i = K; i <= n; i++) {
        cout << s[i] - s[i - K] << " ";
    }
    return 0;
}
