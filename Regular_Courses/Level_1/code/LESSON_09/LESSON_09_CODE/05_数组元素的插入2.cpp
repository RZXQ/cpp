#include <iostream>
using namespace std;

int main() {
    //创建长度为10的数组a，进行初始化
    int a[10] = {100, 80, 120, 93, 134, 99, 65, 105, 124};
    //使用for循环，将下标8~2的数组元素依次向后移动一位
    for (int i = 8; i >= 2; i--) {
        a[i + 1] = a[i];
    }
    //将要插入的数据保存到指定位置
    a[2] = 90;
    //输出查看数组中所有元素
    for (int i = 0; i <= 9; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
