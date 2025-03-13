#include <iostream>
using namespace std;

int main() {
    //斐波那契数列
    int k;
    cin >> k;
    int a = 1;
    int b = 1;
    cout << a << " " << b << " ";
    int c;
    for (int i = 3; i <= k; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}
