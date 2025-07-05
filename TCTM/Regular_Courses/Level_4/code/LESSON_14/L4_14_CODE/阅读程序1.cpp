#include <bits/stdc++.h>
using namespace std;
stack<int> st;
queue<int> q;
int m, x, t;

int main() {
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> x;
        if (i == 0) {
            st.push(x);
            t = x;
        } else {
            if (x >= t) {
                q.push(x);
            } else {
                st.push(x);
                t = x;
            }
        }
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
