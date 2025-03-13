#include<bits/stdc++.h>
using namespace std;
char q[20]; //初始化队列
char a[10]; //存储开始的字母序列
int front, rear; //front:队首 rear:队尾
void push(char x) {
    //入队函数
    if (rear < 20) {
        q[rear] = x;
        rear++;
    }
}

void pop() {
    //出队函数
    if (front != rear)
        front++;
}

char getFront() {
    //获取队首元素
    return q[front];
}

int size() {
    //获取队列中元素个数
    return rear - front;
}

int main() {
    cin >> a;
    for (int i = 0; i < 10; i++) {
        push(a[i]);
    }
    int k = 1;
    while (size() != 0) {
        //队列不为空
        if (k % 2 != 0) {
            //k为奇数
            push(getFront()); //队首元素再入队操作
            pop(); //出队操作
        } else {
            cout << getFront(); //输出队首元素
            pop();
        }
        k++;
    }
    return 0;
}
