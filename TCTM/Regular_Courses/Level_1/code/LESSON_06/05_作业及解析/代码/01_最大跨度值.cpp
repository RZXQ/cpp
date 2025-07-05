#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int max, min;
    cin >> max;
    min = max;
    int a;
    for (int i = 1; i <= n - 1; i += 1) {
        cin >> a;
        if (a > max) max = a;
        if (a < min) min = a;
    }
    cout << max - min;
    return 0;
}
