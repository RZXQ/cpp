#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1000] = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;
    int cnt = 0;
    for (int i = 0; i <= n; i++) {
        if (a[i] == k) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
