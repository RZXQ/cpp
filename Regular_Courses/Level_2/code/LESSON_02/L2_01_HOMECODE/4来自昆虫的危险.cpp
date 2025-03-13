#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z; //x月产y对卵（周期）z+1月成虫数量
    cin >> x >> y >> z;
    //关系总结：
    //成虫：1~x月只有1对成虫；从x+1月开始，成虫=上个月成虫数量+(i-2)卵数量
    //卵 ： 1~x月没有卵；从x+1月开始，卵=(i-x)成虫数量*y
    int a[55] = {}; //卵
    int b[55] = {}; //成虫
    //初始条件
    for (int i = 1; i <= x; i++) b[i] = 1;
    //递推关系
    for (int i = x + 1; i <= z + 1; i++) {
        b[i] = b[i - 1] + a[i - 2];
        a[i] = b[i - x] * y;
    }
    cout << b[z + 1];
    return 0;
}
