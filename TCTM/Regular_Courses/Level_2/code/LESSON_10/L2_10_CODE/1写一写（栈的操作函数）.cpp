#include<bits/stdc++.h>
using namespace std;
int a[6], top;
//入栈函数
void push(int x) {
    if (top < 5) {
        top++;
        a[top] = x;
    }
    return;
}

//出栈函数
void pop() {
    if (top > 0) {
        //a[top]=0; 可以省略
        top--;
    }
    return;
}

//显示栈顶元素
int getTop() {
    return a[top];
}

//清空栈
void clear() {
    top = 0;
    return;
}

int main() {
    return 0;
}
