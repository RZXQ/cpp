#include <iostream>
using namespace std;

int main() {
    //你站我就坐
    int n, k;
    cin >> n >> k;
    int a[10001] = {0};
    for (int i = 1; i <= n; i++) {
        if (i == k || i % k == 0) {
            a[i] = 1;
        }
    }

    for (int i = 1; i <= n; i++) {
        if (a[i] == 0) cout << i << ' ';
    }
    return 0;
}
