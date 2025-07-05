#include<bits/stdc++.h>
using namespace std;
char s[256], a[256];
int top = 0;
//入栈
void push(char x) {
    if (top < 255) {
        top++;
        s[top] = x;
    }
    return;
}

//出栈
void pop() {
    if (top > 0) {
        top--;
    }
    return;
}

int main() {
    int cnt = 0;
    cin >> a; //获取字符串
    int len = strlen(a);
    for (int i = 0; i < len; i++) {
        //左括号入栈
        if (a[i] == '[') {
            push(a[i]);
        } else if (top == 0 && a[i] == ']') {
            cout << "NO";
            return 0;
        } else {
            pop();
            cnt++; //记录成对数
        }
    }
    //栈空时
    if (top == 0) {
        cout << "YES" << " " << cnt;
        //栈非空时
    } else {
        cout << "NO";
    }
    return 0;
}
