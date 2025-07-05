#include <iostream>

using namespace std;

int CharToInt(char c) {
    if (c >= 'a') return c - 87;
    return c - '0';
}

int to_ten(string s, int x) {
    int n = 0;
    for (auto c: s) {
        n = n * x + CharToInt(c);
    }
    return n;
}

int main() {
    string s;
    int x;
    cin >> x >> s;
    cout << to_ten(s, x);
    return 0;
}
