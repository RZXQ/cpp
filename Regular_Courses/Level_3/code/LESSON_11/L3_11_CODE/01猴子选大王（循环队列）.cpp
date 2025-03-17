#include<bits/stdc++.h>
using namespace std;
int q[301]; //队列
int front = 0, rear = 0;

void push(int x) {
    if ((rear + 1) % 301 != front) {
        //未满
        q[rear] = x;
        rear = (rear + 1) % 301; //更新队尾
    }
}

void pop() {
    if (rear != front) {
        //非空
        front = (front + 1) % 301; //更新队首	
    }
}

int main() {
    int n, m; //n只猴子从1~m报数
    cin >> n >> m;
    //猴子编号1~n入队
    for (int i = 1; i <= n; i++)
        push(i);
    int ans; //记录出队编号
    int k = 1; //报的数字
    while (rear != front) {
        if (k % m != 0) {
            //不是m的倍数
            push(q[front]);
            pop();
        } else {
            //m的倍数
            ans = q[front];
            pop();
        }
        k++;
    }
    cout << ans; //输出最后淘汰的编号
    return 0;
}
