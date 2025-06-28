#include<bits/stdc++.h>
using namespace std;
queue<int> q;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        q.push(i);
    int k = 1;
    int ans; //答案
    while (q.empty() != 1) {
        //非空
        if (k % 3 != 0) {
            //不是3倍数放到队尾
            q.push(q.front());
            q.pop();
        } else {
            //3的倍数记录编号
            ans = q.front();
            q.pop();
        }
        k++;
    }
    cout << ans;
    return 0;
}
