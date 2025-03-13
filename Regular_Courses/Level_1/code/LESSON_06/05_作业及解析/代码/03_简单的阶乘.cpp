#include <iostream>
using namespace std;

int main() {
    //简单的阶乘
    int n;
    cin >> n;
    int sum = 1;
    for (int i = 1; i <= n; i++) {
        sum *= i;
    }
    cout << sum;

    return 0;
}
