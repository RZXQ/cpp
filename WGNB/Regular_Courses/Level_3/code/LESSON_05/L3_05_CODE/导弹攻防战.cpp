#include<bits/stdc++.h>
using namespace std;
int a[501]; //存储每枚导弹的高度
int main() {
    int n; //n枚导弹
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int b[501] = {}; //拦截系统
    b[1] = a[1]; //第一套系统拦截
    int k = 1;
    for (int i = 2; i <= n; i++) {
        bool flag = false; //现有系统不能拦截状态
        int m;
        for (int j = 1; j <= k; j++) {
            //遍历k套系统
            if (b[j] >= a[i]) {
                //可以拦截
                if (flag == false) {
                    //找到第一个可拦截的系统
                    m = j; //第一个可拦截系统的编号
                    flag = true; //现有系统能拦截状态
                } else {
                    if (b[j] < b[m]) m = j; //找到更小的拦截系统
                }
            }
        }
        if (flag == false) {
            //新增拦截系统
            k++;
            b[k] = a[i];
        } else b[m] = a[i]; //m号系统拦截
    }
    cout << k;
    return 0;
}
