#include <iostream>
using namespace std;

int main() {
    //记录质检分数
    int x;
    //记录回收产品数量
    int cnt = 0;
    //循环输入统计
    do {
        cin >> x;
        if (x <= 60) cnt++;
    } while (x != 0);
    //输出
    cout << cnt - 1;
    return 0;
}
