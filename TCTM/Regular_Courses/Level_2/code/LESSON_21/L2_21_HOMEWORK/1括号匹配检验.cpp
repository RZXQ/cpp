#include<bits/stdc++.h>
using namespace std;
stack<char> s;
char a[257];

int main() {
    cin >> a;
    int len = strlen(a);
    for (int i = 0; i < len; i++) {
        //左括号入栈
        if (a[i] == '(' || a[i] == '[') {
            s.push(a[i]);
            //右小括号
        } else if (s.empty() != 1 && s.top() == '(' && a[i] == ')') {
            s.pop();
            //右中括号
        } else if (s.empty() != 1 && s.top() == '[' && a[i] == ']') {
            s.pop();
            //其他情况不合理
        } else {
            cout << "Wrong";
            return 0;
        }
    }
    //栈空输出YES
    if (s.empty()) {
        cout << "OK";
    } else {
        cout << "Wrong";
    }
    return 0;
}
