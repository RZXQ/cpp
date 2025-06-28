#include <iostream>
using namespace std;

int main() {
    //1、接收客户身份
    char id;
    cin >> id;
    //2、接收本次花果山旅游的花费
    int x;
    cin >> x;
    ///3、根据客户身份，计算本次旅游花费
    switch (id) {
        case 'P': x -= 100;
            break;
        case 'G': x -= 80;
            break;
        case 'S': x -= 70;
            break;
        default: x -= 30;
    }
    //4、输出本次旅行的花费
    cout << x;


    return 0;
}
