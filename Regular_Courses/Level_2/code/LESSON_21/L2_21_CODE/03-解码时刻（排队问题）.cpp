#include<bits/stdc++.h>
using namespace std;
queue<int> q;

int main() {
    int n, num; //n队列人数 num编号
    cin >> n;
    for (int i = 1; i <= n; i++) {
        //n次入队操作
        cin >> num;
        q.push(num); //入队操作
    }
    int k = 1; //报数
    while (q.empty() != 1) {
        if (k % 2 != 0) {
            //k为奇数
            cout << q.front() << ' '; //输出队首元素
            q.pop(); //队首出队
        } else {
            q.push(q.front()); //队首元素进入队尾
            q.pop(); //队首出队
        }
        k++;
    }
    return 0;
}
