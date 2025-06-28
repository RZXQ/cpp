#include<iostream>
using namespace std;
int q[200], front, rear;

void push(int x) {
    //入队函数
    if (rear < 200) {
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

int getFront() {
    //获取队首元素
    return q[front];
}

int size() {
    //获取队列中元素个数
    return rear - front;
}

int main() {
    int n, num; //n个人排队 num:编号
    cin >> n;
    for (int i = 1; i <= n; i++) {
        //n次入队操作
        cin >> num;
        push(num); //入队操作
    }
    int k = 1; //报数
    while (size() != 0) {
        if (k % 2 != 0) {
            //k为奇数
            cout << getFront() << ' '; //输出队首元素
            pop(); //出队操作
        } else {
            push(getFront()); //队首元素进入队尾
            pop(); //出队操作
        }
        k++; //要报的数字
    }
    return 0;
}
