#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int x = 1; x < n; x++) {
        int y = n / 2 - x;
        if (x <= y) {
            cout << x << ' ' << y << endl;
            cnt++;
        } else break;
    }
    cout << cnt;

    return 0;
}
