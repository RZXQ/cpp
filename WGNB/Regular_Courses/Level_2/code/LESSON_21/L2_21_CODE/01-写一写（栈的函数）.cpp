#include<bits/stdc++.h>
using namespace std;
stack<int> s; //创建栈s
int main() {
    //入栈
    for (int i = 1; i <= 5; i++) {
        s.push(i);
    }
    //输出栈中元素个数
    cout << s.size() << endl;
    //出栈
    while (s.empty() != 1) {
        //判断栈为非空
        s.pop();
    }
    cout << s.size() << endl;
    return 0;
}
