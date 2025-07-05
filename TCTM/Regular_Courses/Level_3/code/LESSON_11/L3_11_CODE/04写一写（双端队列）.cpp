#include<bits/stdc++.h>
using namespace std;
deque<int> dq; //双端队列
int main() {
    dq.push_back(1); //队尾添加1
    dq.push_front(2); //队首添加2
    dq.push_back(3);
    dq.push_front(4);
    dq.pop_front(); //队首删除元素
    dq.pop_back(); //队尾删除元素
    cout << dq.front() << endl; //输出2
    cout << dq.back() << endl; //输出1
    cout << dq.size() << endl; //元素个数2
    cout << dq.empty(); //空返回1,非空0
    return 0;
}
