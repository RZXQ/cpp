#include <iostream>
using namespace std;

int main() {
    //停车场收费计算器
    int n;
    cin >> n;
    int s = 0;
    if (n > 2) {
        s = 5 * 2 + 8 * (n - 2);
    } else s = 5 * n;
    cout << s << endl;

    return 0;
}
