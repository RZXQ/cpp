#include <bits/stdc++.h>
using namespace std;

int main() {
    //幂的运算
    int a, b;
    cin >> a >> b;
    int product = 1;
    for (int i = 1; i <= b; i++) {
        product *= a;
        product %= 1000;
    }
    cout << setw(3) << setfill('0') << product;

    return 0;
}
