#include <iostream>
using namespace std;

int main() {
    //接收输入的纸牌数量
    int n;
    cin >> n;
    //创建数组保存每张纸牌
    int x[13] = {0};
    //设置bool类型变量标记纸牌是否为顺子
    bool flag = 1; //默认是顺子
    //接收第一张纸牌
    cin >> x[0];
    //循环存储剩余每张纸牌，并判断前一张纸牌+1是否不等于后一张
    for (int i = 1; i < n; i++) {
        cin >> x[i];
        if (x[i - 1] + 1 != x[i]) {
            flag = 0;
            break;
        }
    }
    if (flag) cout << "yes";
    else cout << "no";
    return 0;
}
