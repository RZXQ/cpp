#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 7 == 0 || i % 10 == 7)
            continue;
        sum += i;
    }
    cout << sum;
    return 0;
}
