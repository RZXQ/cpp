#include <iostream>
using namespace std;

void f(int n) {
    if (n == 0) {
        return;
    }
    cout << n % 10;
    n /= 10;
    f(n);
}

int main() {
    int n;
    cin >> n;
    f(n);
}
