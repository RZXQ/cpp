#include <iostream>
using namespace std;

int main() {
    //等差数列
    int k, p;
    cin >> k >> p;
    int n = 1;
    for (int i = 1; i <= k; i++) {
        cout << n << " ";
        n += p;
    }
    return 0;
}
