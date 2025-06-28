#include<iostream>
using namespace std;

int main() {
    long long a[100] = {}, n;
    a[1] = a[2] = 1;
    cin >> n;
    for (int i = 3; i <= n; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }
    cout << a[n];
    return 0;
}
