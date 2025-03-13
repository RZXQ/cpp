#include <iostream>
using namespace std;

int main() {
    //定义数组a进行初始化
    int a[7] = {100, 80, 120, 93, 134, 99};
    //使用for循环，将下标5~3的数组元素依次向后移动一位
    for (int i = 5; i >= 3; i--) {
        a[i + 1] = a[i];
    }
    //将要插入的数据保存到指定位置
    a[3] = 105;
    //输出查看数组中所有元素
    for (int i = 0; i <= 6; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
