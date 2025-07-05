#include<bits/stdc++.h>
using namespace std;
char q[16], a[8];
int front = 0, rear = 0;

void push(char x) {
    //入队函数
    if (rear < 16) {
        q[rear] = x;
        rear++;
    }
}

void pop() {
    //出队操作
    if (front != rear) {
        front++;
    }
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
    for (int i = 0; i < strlen(a); i++) {
        push(a[i]);
    }
    int k = 1;
    while (size() != 0) {
        if (k % 2 != 0) {
            cout << getFront(); //输出队首元素
            pop(); //出队操作
        } else {
            push(getFront()); //队首元素进入队尾
            pop(); //出队操作
        }
        k++;
    }
    return 0;
}
