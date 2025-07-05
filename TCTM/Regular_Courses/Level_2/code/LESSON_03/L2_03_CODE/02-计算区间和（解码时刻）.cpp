#include<bits/stdc++.h>
using namespace std;
int a[500010] = {}; //原数组
int s[500010] = {}; //前缀和数组
int main() {
    int n, m;
    cin >> n >> m;
    //1.输入n个元素; 注意从下标1开始使用
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    //2.循环推导前缀和
    s[1] = a[1];
    for (int i = 2; i <= n; i++) {
        s[i] = s[i - 1] + a[i];
    }
    //3.循环计算m次区间和：s[R]-s[L-1]
    int L, R; //区间起始下标L，终止下标R
    for (int i = 1; i <= m; i++) {
        cin >> L >> R; //输入1个区间的下标
        cout << s[R] - s[L - 1] << endl; //计算输出区间和
    }
    return 0;
}
