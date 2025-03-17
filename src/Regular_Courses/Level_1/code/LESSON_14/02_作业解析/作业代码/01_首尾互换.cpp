#include <bits/stdc++.h>
using namespace std;

int main() {
    //接收字符串的输入,首尾非空格
    char c1[51] = {0};
    cin.getline(c1, 50);
    //创建字符数组c2保存首尾互换后的字符串
    char c2[51] = {0};
    //保存首尾字符
    c2[0] = c1[strlen(c1) - 1];
    c2[strlen(c1) - 1] = c1[0];
    //抛开首尾字符，遍历c1中其他字符，逐一保存至c2中
    for (int i = 1; i < strlen(c1) - 1; i++) {
        c2[i] = c1[i];
    }
    //输出拼接后的字符串
    cout << strcat(c1, c2);
    return 0;
}
