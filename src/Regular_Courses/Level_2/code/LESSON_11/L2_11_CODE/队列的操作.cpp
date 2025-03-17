#include<iostream>
using namespace std;
int q[5]; //初始化队列
int front = 0, rear = 0;

void push(int x) {
    //入队函数
    if (rear < 5) {
        q[rear] = x;
        rear++;
    }
}

void pop() {
    //出队函数
    if (front != rear) {
        front++;
    }
}

int Front() {
    //获取队首元素
    return q[front];
}

int main() {
    int num;
    for (int i = 1; i <= 5; i++) {
        cin >> num;
        push(num); //num值入队
    }
    //出队并输出出队元素
    for (int i = 1; i <= 3; i++) {
        cout << Front() << " "; //输出队首元素
        pop(); //出队操作
    }
    cout << endl << Front(); //输出队首元素
    return 0;
}
