#include<bits/stdc++.h>
using namespace std;
int a[100010] = {}; //原数组
int s[100010] = {}; //前缀和数组
int main() {
    int n, m;
    cin >> n;
    //1、输入n个整数
    for (int i = 1; i <= n; i++) cin >> a[i];
    //2、推导前缀和
    s[1] = a[1];
    for (int i = 2; i <= n; i++) s[i] = s[i - 1] + a[i];
    //3、遍历m次操作，判断并处理
    cin >> m;
    int c; //操作标记
    int L, R;
    int k, num;
    for (int i = 1; i <= m; i++) {
        //m次操作
        cin >> c;
        if (c == 1) {
            //计算区间和
            cin >> L >> R;
            cout << s[R] - s[L - 1] << endl;
        } else {
            //修改一个整数
            cin >> k >> num;
            a[k] = num; //元素a[k]赋值num
            //重新计算前缀和
            s[1] = a[1];
            for (int j = 2; j <= n; j++) s[j] = s[j - 1] + a[j];
        }
    }
    return 0;
}
