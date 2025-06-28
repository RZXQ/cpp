#include <iostream>
using namespace std;

int main() {
    int a[10] = {0};
    int m, n;
    cin >> m >> n;
    int j;
    int b;
    for (int i = m; i <= n; i++) {
        j = i;
        while (j > 0) {
            b = j % 10;
            a[b]++;
            j /= 10;
        }
    }
    for (int i = 0; i <= 9; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
