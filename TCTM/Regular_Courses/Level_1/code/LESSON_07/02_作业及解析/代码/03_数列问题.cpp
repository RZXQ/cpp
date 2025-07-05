#include <iostream>
using namespace std;

int main() {
    //数列问题
    int n;
    cin >> n;
    int a = 1, b = 2;
    int c;
    int sum = 0;
    sum = a + b;
    for (int i = 3; i <= n; i++) {
        c = (a + b) * 3;
        a = b;
        b = c;
        sum += c;
    }
    cout << c << endl << sum;
    return 0;
}
