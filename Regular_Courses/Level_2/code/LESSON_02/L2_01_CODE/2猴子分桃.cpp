#include<bits/stdc++.h>
using namespace std;

int main() {
    //a[0]初始化为1
    int a[8] = {1};
    //从第7只推算到第1只吃之前的数量
    for (int i = 1; i <= 7; i++) {
        //当前结果等于上一次结果乘2加1
        a[i] = a[i - 1] * 2 + 1;
    }
    //输出第1只猴子吃之前的数量
    cout << a[7];
    return 0;
}
