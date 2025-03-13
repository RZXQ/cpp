#include<bits/stdc++.h>
using namespace std;
int a[4];
int top;
//入栈函数
void push(int x) {
    if (top < 3) {
        top++;
        a[top] = x;
    }
    return;
}

//出栈函数
void pop() {
    if (top > 0) {
        top--;
    }
    return;
}

//显示栈顶元素
int getTop() {
    return a[top];
}

int main() {
    //输入组数
    int n = 0;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cnt++;
            push(cnt);
        }
        for (int k = 0; k < 3; k++) {
            cout << getTop() << ' ';
            pop();
        }
    }
    return 0;
}
