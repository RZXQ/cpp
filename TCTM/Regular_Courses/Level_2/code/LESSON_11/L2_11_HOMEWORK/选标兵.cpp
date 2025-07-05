#include<bits/stdc++.h>
using namespace std;
int q[1000001];
int front, rear;

void push(int x) {
    q[rear++] = x;
}

int getTop() {
    return q[front];
}

void pop() {
    front++;
}

int size() {
    return rear - front;
}

int main() {
    int m, n; //m:人数 n:报数n出队列
    cin >> m >> n;
    for (int i = 1; i <= m; i++) push(i);
    int k = 0;
    while (size() != 0) {
        k++; //报数
        if (k % n == 0) {
            k = 0;
            cout << q[front] << endl;
            pop();
        } else {
            push(getTop());
            pop();
        }
    }
    return 0;
}
