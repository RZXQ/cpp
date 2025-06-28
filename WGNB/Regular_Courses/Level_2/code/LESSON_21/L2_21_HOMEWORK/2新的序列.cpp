#include<bits/stdc++.h>
using namespace std;
queue<int> q;

int main() {
    int n;
    cin >> n;
    //将1~n依次入队
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    int k = 1; //抽第1张纸牌
    while (q.empty() != 1) {
        if (k % 3 != 0) {
            //编号不是3的倍数
            q.push(q.front());
            q.pop();
        } else {
            //编号是3的倍数
            cout << q.front() << " ";
            q.pop();
        }
        k++; //纸牌的编号增加1
    }
    return 0;
}
