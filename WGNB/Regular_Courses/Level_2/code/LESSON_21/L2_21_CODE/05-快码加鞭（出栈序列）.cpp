#include<bits/stdc++.h>
using namespace std;
stack<int> s;
int a[5], b[5];

int main() {
    //输入5个整数，入栈顺序
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    //输入5个整数，出栈顺序
    for (int i = 0; i < 5; i++) {
        cin >> b[i];
    }
    int num = 0; //出栈元素的下标
    for (int i = 0; i < 5; i++) {
        //1)安排一个元素入栈
        s.push(a[i]);
        //2)验证栈顶元素和出栈元素相等
        while (!s.empty() && s.top() == b[num]) {
            s.pop(); //出栈
            num++; //下标加1，验证下一元素
        }
    }
    if (s.empty())
        cout << "yes";
    else
        cout << "no";
    return 0;
}
