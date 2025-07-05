#include<bits/stdc++.h>
using namespace std;

struct stu {
    int times; //次数
    int id; //编号
};

stu q[21]; //循环队列
int front = 0, rear = 0;

void push(stu x) {
    if ((rear + 1) % 21 != front) {
        //队列不满
        q[rear] = x;
        rear = (rear + 1) % 21; //队尾rear加1
    }
}

void pop() {
    if (front != rear) {
        //队列非空
        front = (front + 1) % 21; //队首front加1
    }
}

int main() {
    int n, m, a; //同学人数n，出局数字m，性别a
    cin >> n;
    stu b;
    for (int i = 1; i <= n; i++) {
        cin >> a; //1是男生，0是女生
        b.times = (a == 1 ? 1 : 2); //男生1次，女生2次
        b.id = i;
        push(b); //入队
    }
    cin >> m;
    int k = 1, ans; //报数k
    while (front != rear) {
        //循环队列非空
        if (k % m != 0) {
            //不是m的倍数
            push(q[front]);
            pop();
        } else if (k % m == 0 && q[front].times > 1) {
            //报数m且次数大于1
            q[front].times--;
            push(q[front]);
            pop();
        } else {
            //报数m且次数只有1
            ans = q[front].id;
            pop();
        }
        k++;
    }
    cout << ans;
    return 0;
}
