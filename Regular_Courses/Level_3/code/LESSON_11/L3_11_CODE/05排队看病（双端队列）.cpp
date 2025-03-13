#include<bits/stdc++.h>
using namespace std;
deque<string> dq; //双端队列
int main() {
    int n; //病人数量
    cin >> n;
    int a; //0左边坐下，1右边坐下
    string name; //姓名
    for (int i = 1; i <= n; i++) {
        cin >> a >> name;
        if (a == 0) //队首添加
            dq.push_front(name);
        else //队尾添加
            dq.push_back(name);
    }
    while (dq.empty() != 1) {
        //队列不为空
        cout << dq.front() << endl; //取队首元素
        dq.pop_front(); //删除队首元素
    }
    return 0;
}
