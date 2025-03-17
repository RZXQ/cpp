#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int j, y, t;
    int sum_j = 0, sum_y = 0, sum_t = 0;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> j >> y >> t;
        sum_j += j;
        sum_y += y;
        sum_t += t;
        sum += j + y + t;
    }
    cout << sum_j << ' ' << sum_y << ' ' << sum_t << ' ' << sum;
    return 0;
}
