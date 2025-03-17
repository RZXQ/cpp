#include<bits/stdc++.h>
using namespace std;

int main() {
    //创建并初始化数组a：从下标1开始用，下标0赋值0
    int a[11] = {0, 3, 2, 5, 6, 6, 1, 4, 1, 7, 3};
    //创建并初始化数组s
    int s[11] = {};
    //1.初始条件：s[1]=a[1]
    s[1] = a[1];
    //2.根据递推关系推导前缀和：s[i]=s[i-1]+a[i]  (i>=2)
    for (int i = 2; i <= 10; i++) {
        s[i] = s[i - 1] + a[i];
    }
    //3.循环输出前缀和
    for (int i = 1; i <= 10; i++) {
        cout << s[i] << " ";
    }
    return 0;
}
