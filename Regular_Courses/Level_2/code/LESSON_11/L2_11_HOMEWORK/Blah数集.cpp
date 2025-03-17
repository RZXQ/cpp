#include<bits/stdc++.h>
using namespace std;
long long q[1000001];

int main() {
    int a, n;
    cin >> a >> n; //集合的基a 元素序号n
    int rear = 1; //队尾
    int f_x2 = 1, f_x3 = 1; //f_x2:x*2+1的队首  f_x3:x*3+1的队首
    q[rear] = a; //入队操作第一步
    rear++; //入队操作第二步
    while (rear <= n) {
        long long x2 = q[f_x2] * 2 + 1, x3 = q[f_x3] * 3 + 1;
        long long t; //待入队数据
        if (x2 < x3) {
            t = x2;
            f_x2++; //把较小值入队，f_x2++操作
        } else {
            t = x3;
            f_x3++; //把较小值入队，f_x3++操作
        }
        if (t == q[rear - 1]) continue; //如果入队数据等于队尾数据,重新寻找入队数据
        q[rear] = t; //入队操作第一步
        rear++; //出队操作第一步
    }
    cout << q[n]; //输出第n个元素的值
    for (int i = 1; i <= n; i++) {
        if (q[i] == q[i + 1]) {
            cout << i << "  ";
        }
    }
    return 0;
}

//3 2602
