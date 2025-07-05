#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 9, b = 1, c = 2, d = 3;

    cout << a << b << endl;
    cout << (a << b) << endl;
    a |= a & 1;
    cout << (a | b ^ c & d << 1);

    return 0;
}
