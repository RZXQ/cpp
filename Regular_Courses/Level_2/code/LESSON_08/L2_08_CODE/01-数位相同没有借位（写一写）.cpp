#include<bits/stdc++.h>
using namespace std;

int main() {
    //1. 当字符串输入
    char a[21], b[21];
    cin >> a >> b;
    //2. 转换到整数数组
    int la = strlen(a), lb = strlen(b);
    int a1[21] = {}, b1[21] = {};
    for (int i = 0; i < la; i++) {
        a1[i] = a[i] - 48;
    }
    for (int i = 0; i < lb; i++) {
        b1[i] = b[i] - 48;
    }
    //3. 对应位相减
    for (int i = 0; i < la; i++) {
        cout << a1[i] - b1[i];
    }
    return 0;
}
