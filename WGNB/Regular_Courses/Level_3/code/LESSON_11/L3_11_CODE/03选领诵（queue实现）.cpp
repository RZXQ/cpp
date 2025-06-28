#include<bits/stdc++.h>
using namespace std;

struct stu {
    int times; //次数
    int id; //编号
};

queue<stu> q; //STL-queue
int main() {
    int n, m, a; //同学人数n，出局数字m，性别a
    cin >> n;
    stu b;
    for (int i = 1; i <= n; i++) {
        cin >> a; //1是男生，0是女生
        b.times = (a == 1 ? 1 : 2); //男生1次，女生2次
        b.id = i;
        q.push(b); //入队
    }
    cin >> m;
    int k = 1, ans; //报数k
    while (q.empty() != 1) {
        //循环队列非空
        if (k % m != 0) {
            //不是m的倍数
            q.push(q.front());
            q.pop();
        } else if (k % m == 0 && q.front().times > 1) {
            //报数m且次数大于1
            q.front().times--;
            q.push(q.front());
            q.pop();
        } else {
            //报数m且次数只有1
            ans = q.front().id;
            q.pop();
        }
        k++;
    }
    cout << ans;
    return 0;
}
