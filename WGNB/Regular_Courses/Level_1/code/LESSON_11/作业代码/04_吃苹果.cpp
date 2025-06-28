#include <iostream>
using namespace std;

int main() {
    int m, t, s;
    cin >> m >> t >> s;
    int a = 0, b = 0;
    do {
        a++;
        if (a >= m) {
            break;
        }
        b += t;
    } while (b < s);
    cout << m - a;
    return 0;
}
