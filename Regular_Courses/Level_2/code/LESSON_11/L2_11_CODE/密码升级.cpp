#include<bits/stdc++.h>
using namespace std;
char q[24], a[8]; //q:队列 a:生日
int front, rear;

void push(char x) {
    //入队操作
    if (rear < 24) {
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
    //队列中元素个数
    return rear - front;
}

int main() {
    cin >> a; //读入生日
    for (int i = 0; i < strlen(a); i++) {
        push(a[i]); //入队操作
    }
    int k = 1; //报数
    while (size() != 0) {
        //队列不为空
        if (k % 2 != 0) {
            //判断要报数字奇偶
            cout << getFront(); //输出队首元素
            pop(); //出队操作
        } else {
            push(getFront()); //队首元素进入队尾
            pop(); //出队操作
            push(getFront()); //队首元素进入队尾
            pop(); //出队操作
        }
        k++; //下次要报的数字
    }
    return 0;
}
