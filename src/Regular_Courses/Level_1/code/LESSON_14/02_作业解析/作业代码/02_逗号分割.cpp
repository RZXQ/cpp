#include <bits/stdc++.h>
using namespace std;

int main() {
    //创建字符数组
    char s[101] = {0};
    //接收输入字符串
    cin.getline(s, 100);
    //记录字符数组下标
    int i = 0;
    while (s[i] != 0) {
        //判断字符是否不为逗号
        if (s[i] != ',')
            //符合条件，输出当前字符
            cout << s[i];
        else
            //否则，结束循环
            break;
        i++;
    }
    return 0;
}
