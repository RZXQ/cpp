#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    int sum = 0;
    int d = 1;
    int i = 1;
    while (d <= k) {
        for (int j = 1; j <= i; j++) {
            if (d > k) break;
            sum += i;
            d++;
        }
        i++;
    }
    cout << sum;
    return 0;
}
