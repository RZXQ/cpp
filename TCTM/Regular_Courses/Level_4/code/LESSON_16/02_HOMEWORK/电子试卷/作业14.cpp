1
#include <iostream>
2
3
using namespace std;
4
5
int CharToInt(char c) {
    6
    if (c >= 'a') return c - 'A' + 10;
    7
    return c - '0';
    8
}

9
int to_ten(string s, int x) {
    10
    int n = 0;
    11
    for (auto c: s) {
        12
        n = n * x + CharToInt(c);
        13
    }
    14
    return n;
    15
}

16
int main() {
    17
    string s;
    18
    int x;
    19
    cin >> x >> s;
    20
    cout << to_ten(s, x);
    21
    return 0;
    22
}
