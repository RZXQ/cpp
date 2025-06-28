#include <iostream>
using namespace std;

int main() {
    //接收猴子数量
    int n;
    cin >> n;
    //记录每只猴子的状态（0候选，1出局）
    bool p[101] = {0};
    //i代表报数的猴子编号，j为报数的计数器
    int i = 0, j = 0;
    //记录候选猴子的数量
    int t = n;
    //循环报数，找到报3的猴子，让其出局
    for (; t > 0;) {
        i++;
        if (i == n + 1) i = 1;
        if (p[i] == 0) {
            j++;
            if (j == 3) {
                p[i] = 1;
                j = 0;
                t--;
            }
        }
    }
    //输出猴王编号
    cout << i;
    return 0;
}
