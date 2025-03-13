#include<bits/stdc++.h>
using namespace std;
stack<int> s;

int main() {
    int a = 0, sum = 0, b = 0;
    char c;
    cin >> a;
    s.push(a % 10000);
    //符号与数字成组输入
    while (cin >> c, cin >> b) {
        if (c == '+') {
            s.push(b % 10000);
        } else {
            int x = s.top();
            s.pop();
            s.push(x * b % 10000);
        }
    }
    while (s.empty() != 1) {
        sum = (sum + s.top()) % 10000;
        s.pop();
    }
    cout << sum;
    return 0;
}
