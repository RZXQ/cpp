#include <iostream>
using namespace std;
const int SIZE = 100;
int a[SIZE], n;

void swap(int p) {
    int i, j, temp;
    for (i = p + 1; i <= n; i++) {
        temp = a[i];
        for (j = i; j >= i - p + 1; j--) {
            a[j] = a[j - 1];
        }
        a[i - p] = temp;
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int p;
    cin >> p;
    swap(p);
    for (int i = 1; i <= n; i++) {
        cout << a[i] << ' ';
    }
    return 0;
}
