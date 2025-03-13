#include <iostream>
using namespace std;

int main() {
    //输出0~100之间的数
    for (int i = 0; i < 100; i += 1)
        cout << i << " ";
    cout << endl;
    //输出0~100之间的偶数
    for (int i = 0; i < 100; i += 2)
        cout << i << " ";
    cout << endl;
    //输出0~100之间的奇数
    for (int i = 1; i < 100; i += 2)
        cout << i << " ";
    cout << endl;
    return 0;
}
