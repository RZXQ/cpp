#include <iostream>
using namespace std;

int main() {
    //赛马游戏
    int a, b, c, t;
    cin >> a >> b >> c;
    if (a > b) {
        t = a;
        a = b;
        b = t;
    }
    if (a > c) {
        t = a;
        a = c;
        c = t;
    }
    if (b > c) {
        t = b;
        b = c;
        c = t;
    }
    cout << a << " " << b << " " << c << endl;


    return 0;
}
