#include <iostream>
using namespace std;

int main() {
    //创建数组保存苹果高度
    int a[11] = {0};
    //循环接收输入的苹果高度
    for (int i = 1; i <= 10; i++) {
        cin >> a[i];
    }
    //保存陶陶伸直手臂最大高度
    int h;
    cin >> h;
    h += 30; //加小板凳高度
    //创建变量记录能摘到的苹果数量
    int cnt = 0;
    //循环判断并输出
    for (int i = 1; i <= 10; i++) {
        if (h >= a[i]) cnt++;
    }
    cout << cnt;
    return 0;
}
