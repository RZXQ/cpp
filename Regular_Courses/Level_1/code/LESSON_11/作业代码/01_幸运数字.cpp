#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum1 = 0, sum2 = 0;
    int a;
    while (n != 0) {
        a = n % 10;
        if (a % 2 == 1)
            sum1 += a;
        else sum2 += a;
        n = n / 10;
    }
    if (sum1 == sum2)
        cout << "Yes";
    else cout << "No";
    return 0;
}
