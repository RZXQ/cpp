#include<bits/stdc++.h>
using namespace std;
stack<char> s;
char a[201];

int main() {
    cin >> a; //获取字符串
    int len = strlen(a);
    for (int i = 0; i < len; i++) {
        //左括号入栈
        if (a[i] == '(') {
            s.push(a[i]);
            //判断栈顶
        } else if (s.empty() != 1 && s.top() == '(') {
            s.pop();
        } else {
            cout << "NO";
            return 0;
        }
    }
    //栈空时
    if (s.empty()) {
        cout << "YES";
        //栈非空时
    } else {
        cout << "NO";
    }
    return 0;
}
