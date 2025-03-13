#include <iostream>
using namespace std;

int main() {
    int n, x, y, m;
    cin >> n >> x >> y;
    //条件运算符
    m = y % x == 0 ? y / x : y / x + 1;
    cout << (m > n ? 0 : n - m);
    return 0;
}
