#include<bits/stdc++.h>
using namespace std;
int a[6], top;

void push(int x) {
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

int getTop() {
    //显示栈顶元素
    return a[top];
}

void clear() {
    //清空栈
    top = 0;
    return;
}

int main() {
    int num = 0;
    //入栈
    for (int i = 1; i <= 5; i++) {
        cin >> num;
        push(num);
    }
    //出栈并输出出栈元素
    for (int i = 1; i <= 3; i++) {
        cout << getTop() << " ";
        pop();
    }
    //输出栈顶元素
    cout << endl << getTop();
    return 0;
}
