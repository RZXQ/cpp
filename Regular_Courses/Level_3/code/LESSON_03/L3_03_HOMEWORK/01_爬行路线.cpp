#include<iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    long long a[105] = {0, 1, 2};
    for (int i = 3; i <= n - m; i++) a[i] = a[i - 1] + a[i - 2];
    cout << a[n - m];
    // 1 2 3 5 8 13 21 34 55 89 144 233 377 610 
    return 0;
}
