#include <iostream>
using namespace std;
int x, y, n, sum = 0;

int main() {
    cin >> x >> y >> n;
    for (int i = 1; i <= n; i++) {
        if (i % x == 0 || i % y == 0) sum++;
    }
    cout << sum;
    return 0;
}
