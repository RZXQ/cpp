#include<bits/stdc++.h>
using namespace std;
int top;
char a[10];

void push(char x) {
    //入栈函数
    if (top < 5) {
        top++;
        a[top] = x;
    }
    return;
}

void pop() {
    //出栈函数
    if (top > 0) {
        top--;
    }
    return;
}

char getTop() {
    //显示栈顶元素
    return a[top];
}

int main() {
    char num = 0;
    //入栈
    for (int i = 1; i <= 5; i++) {
        cin >> num;
        push(num);
    }
    //出栈
    for (int i = 1; i <= 5; i++) {
        cout << getTop() << " ";
        pop();
    }
    return 0;
}
