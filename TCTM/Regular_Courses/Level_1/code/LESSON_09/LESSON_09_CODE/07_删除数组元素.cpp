#include <iostream>
using namespace std;

int main() {
    //定义数组a进行初始化
    int a[7] = {100, 80, 120, 105, 93, 134, 99};
    //使用for循环将下标从3~6的元素依次前移一位
    for (int i = 3; i <= 6; i++) {
        a[i - 1] = a[i];
    }
    //输出数组中的元素
    for (int i = 0; i <= 5; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
