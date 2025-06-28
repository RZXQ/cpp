#include<bits/stdc++.h>
using namespace std;
int s[101];
int top = 0;
//入栈
void push(int x) {
    if (top < 100) {
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
int getTop() {
    return s[top];
}

int main() {
    int n = 0, num = 0;
    cin >> n;
    //输入并入栈
    for (int i = 0; i < n; i++) {
        cin >> num;
        push(num); //入栈
    }
    //输出并出栈
    while (top > 0) {
        //判断栈不为空
        cout << getTop() << " "; //输出栈顶
        pop(); //出栈
    }
    return 0;
}
