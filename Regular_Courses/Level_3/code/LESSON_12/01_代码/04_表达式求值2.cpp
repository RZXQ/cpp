#include <bits/stdc++.h>
using namespace std;
stack<long long> s;

int main() {
    long long a = 0, b = 0, sum = 0;
    char c;
    cin >> a;
    s.push(a % 10000);
    while (cin >> c, cin >> b) {
        if (c == '+') {
            s.push(b % 10000); //b入栈
        } else if (c == '-') {
            s.push(b / -1 % 10000);
        } else if (c == '*') {
            //乘号 取栈顶元素与b乘法
            int x = s.top(); //
            s.pop(); //弹栈
            s.push(x * b % 10000);
        } else {
            int x = s.top();
            s.pop();
            s.push(x / b % 10000);
        }
    }
    while (s.empty() != 1) {
        sum = (sum + s.top()) % 10000;
        s.pop();
    }
    cout << sum;
    return 0;
}
