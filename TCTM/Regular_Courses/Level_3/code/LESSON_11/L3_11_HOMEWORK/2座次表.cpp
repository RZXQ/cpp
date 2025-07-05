#include<bits/stdc++.h>
using namespace std;
deque<string> dq; //双端队列
int main() {
    int n; //1~20000
    cin >> n;
    int a;
    string name;
    for (int i = 1; i <= n; i++) {
        cin >> a >> name;
        if (a == 0) //a=0从左边进			
            dq.push_front(name);
        else //a=1从右边进
            dq.push_back(name);
    }
    while (dq.empty() != 1) {
        cout << dq.front() << endl;
        dq.pop_front();
    }
    return 0;
}
