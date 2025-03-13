#include <iostream>
using namespace std;

int main() {
    //1、输入重量和地区编号
    int w, id;
    cin >> w >> id;
    //2、创建变量保存快递费用
    int m = 0;
    //3、根据快递重量和地区编号计算快递费用
    switch (id) {
        case 1:
            if (w <= 2) m = 13;
            else m = 13 + 3 * (w - 2);
            break;
        case 2:
            if (w <= 2) m = 12;
            else m = 12 + 2 * (w - 2);
            break;
        case 3:
            if (w <= 2) m = 14;
            else m = 14 + 4 * (w - 2);
            break;
    }
    //4、输出快递费用
    cout << m;

    return 0;
}
