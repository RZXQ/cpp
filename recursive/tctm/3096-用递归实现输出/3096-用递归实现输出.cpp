/*
Description
用递归实现输出1、2、3、4、5、6、7、8、9、10。

Input
一行，10个数字，从1开始到10结束，用空格隔开。

Output
1 2 3 4 5 6 7 8 9 10

Sample Input 1
无

Sample Output 1
1 2 3 4 5 6 7 8 9 10
*/
#include <iostream>
using namespace std;

// 递进的时候进行输出
// int f(int n) {
//     if (n <= 10) {
//         cout << n << " ";
//         f(n + 1);
//     }
// }
//
// int main() {
//     f(1);
// }

// 回归的时候进行输出
void f(int n) {
    if (n > 1) {
        f(n - 1);
    }
    cout << n << " ";
}


int main() {
    f(10);
    return 0;
}
