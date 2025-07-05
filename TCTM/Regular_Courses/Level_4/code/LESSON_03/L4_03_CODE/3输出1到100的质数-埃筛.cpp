#include<bits/stdc++.h>
using namespace std;

int main() {
    //下标0、1元素初始化为1，其他元素初始化为0
    int a[110] = {1, 1};
    //标记质数倍数
    for (int i = 2; i * i <= 100; i++) {
        if (a[i] == 0) {
            for (int j = i * i; j <= 100; j += i) {
                a[j] = 1;
            }
        }
    }
    //输出质数，元素值为0的下标
    for (int i = 2; i <= 100; i++) {
        if (a[i] == 0) {
            cout << i << " ";
        }
    }
    return 0;
}
