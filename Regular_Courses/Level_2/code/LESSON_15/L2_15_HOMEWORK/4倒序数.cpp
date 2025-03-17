#include<bits/stdc++.h>
using namespace std;
//递归倒序输出
void f(int a) {
    if (a == 0) return;
    cout << a % 10;
    f(a / 10);
}

int main() {
    int a;
    cin >> a;
    f(a);
    return 0;
}
