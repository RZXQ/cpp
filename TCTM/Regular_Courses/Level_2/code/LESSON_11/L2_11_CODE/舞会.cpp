#include<iostream>
using namespace std;
int boys[2000], girls[2000]; //boys:男队 girls:女队
int front1 = 0, rear1; //男队的队首与队尾
int front2, rear2; //女队的队首与队尾
//男队的入队函数
void push1(int x) {
    if (rear1 < 2000) {
        boys[rear1] = x;
        rear1++;
    }
}

//男队的出队函数
void pop1() {
    if (front1 != rear1)
        front1++;
}

//获取男队队首元素
int getFront1() {
    return boys[front1];
}

//女队的入队函数
void push2(int x) {
    if (rear2 < 2000) {
        girls[rear2] = x;
        rear2++;
    }
}

//女队的出队函数
void pop2() {
    if (front2 != rear2)
        front2++;
}

//获取女队队首元素
int getFront2() {
    return girls[front2];
}

int main() {
    int x, y, n; //x:男队人数 y:女队人数 n:舞曲数目
    cin >> x >> y >> n;
    for (int i = 1; i <= x; i++) {
        //男队编号1~x
        push1(i); //入队函数
    }
    for (int i = 1; i <= y; i++) {
        //女队编号1~y
        push2(i); //入队函数
    }
    for (int i = 1; i <= n; i++) {
        //循环n次
        cout << getFront1() << ' ' << getFront2() << endl; //输出两个队伍的队首元素
        push1(getFront1()); //男队的队首元素重新入队
        push2(getFront2()); //女队的队首元素重新入队
        pop1(); //男队出队操作
        pop2(); //女队出队操作
    }
    return 0;
}
