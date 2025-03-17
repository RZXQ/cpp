#include<bits/stdc++.h>
using namespace std;
char s[101], a[101];
int top = 0;
//入栈
void push(char x) {
    if (top < 200) {
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

//显示栈顶
char getTop() {
    return s[top];
}

int main() {
    cin >> a; //获取字符串
    int len = strlen(a);
    for (int i = 0; i < len; i++) {
        //左括号入栈
        if (a[i] == '[' || a[i] == '(') {
            push(a[i]);
            //右括号对比
        } else if (a[i] == ')' && getTop() == '(') {
            pop();
        } else if (a[i] == ']' && getTop() == '[') {
            pop();
            //既匹配不了栈顶也无法入栈
        } else {
            cout << "NO";
            return 0;
        }
    }
    //栈空时
    if (top == 0) {
        cout << "YES";
        //栈非空时
    } else {
        cout << "NO";
    }
    return 0;
}
