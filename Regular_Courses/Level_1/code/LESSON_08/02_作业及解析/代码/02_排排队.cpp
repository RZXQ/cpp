#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100] = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 1)
            cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            cout << a[i] << " ";
    }
    return 0;
}
