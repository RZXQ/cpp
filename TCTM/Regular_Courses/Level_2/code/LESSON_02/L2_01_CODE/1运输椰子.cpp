#include<iostream>
using namespace std;

int main() {
    int a[7] = {};
    a[0] = 64062; //海南出发前的椰子数量
    for (int i = 1; i <= 5; i++) {
        //经过5座城市
        a[i] = a[i - 1] / 2 - 1; //递推关系式
    }
    cout << a[5]; //到达上海剩余椰子数量
    return 0;
}
