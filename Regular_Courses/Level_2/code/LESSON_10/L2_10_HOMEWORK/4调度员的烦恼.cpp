#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> q;
    int n, a[1001] = {};
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int j = 1; //序列下标
    for (int i = 1; i <= n; i++) {
        q.push(i); //顺序入栈
        //栈顶与序列顺序匹配
        while (q.empty() == 0 && q.top() == a[j]) {
            q.pop();
            j++;
        }
    }
    //栈空证明符合出入栈规则
    if (q.empty() == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
