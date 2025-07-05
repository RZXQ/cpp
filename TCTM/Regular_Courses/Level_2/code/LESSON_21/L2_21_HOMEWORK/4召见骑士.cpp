#include<bits/stdc++.h>
using namespace std;
stack<int> s;

int main() {
    int a[5] = {1, 3, 5, 7, 9}; //入栈顺序
    //出栈顺序
    int b[5] = {};
    for (int i = 0; i < 5; i++) {
        cin >> b[i];
    }
    int num = 0; //出栈元素的下标
    for (int i = 0; i < 5; i++) {
        //1)安排一个元素入栈
        s.push(a[i]);
        //2)验证栈顶元素和出栈元素相等
        while (s.empty() != 1 && s.top() == b[num]) {
            s.pop();
            num++;
        }
    }
    if (s.empty())
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
