#include<bits/stdc++.h>
using namespace std;

int main() {
    char a[21]; //创建字符数组
    cin >> a; //输入字符串
    int la = strlen(a); //字符串长度
    int a1[21] = {}; //创建整数数组
    for (int i = 0; i < la; i++) {
        a1[i] = a[i] - 48;
    }
    for (int i = 0; i < la; i++) {
        cout << a1[i];
    }
    return 0;
}
