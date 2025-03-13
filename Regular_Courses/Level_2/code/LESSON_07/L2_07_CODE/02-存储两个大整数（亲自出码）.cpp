#include<bits/stdc++.h>
using namespace std;

int main() {
    //大整数存储第1步：当字符串输入
    char a[2001], b[2001];
    cin >> a >> b;
    //大整数存储第2步：字符数组转整数数组
    int la = strlen(a);
    int a1[2001] = {}, b1[2001] = {};
    for (int i = 0; i < la; i++) {
        a1[i] = a[i] - 48;
        b1[i] = b[i] - 48;
    }
    for (int i = 0; i < la; i++) {
        cout << a1[i];
    }
    cout << endl;
    for (int i = 0; i < la; i++) {
        cout << b1[i];
    }
    return 0;
}
