#include<bits/stdc++.h>
using namespace std;
int q[201];
int front, rear;

void push(int x) {
    if (rear <= 200)q[rear++] = x;
}

int getFront() {
    return q[front];
}

void pop() {
    if (front != rear) front++;
}

int size() {
    return rear - front;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) push(i);
    while (size() != 0) {
        cout << getFront() << ' ';
        pop();
        push(getFront());
        pop();
    }
    return 0;
}
