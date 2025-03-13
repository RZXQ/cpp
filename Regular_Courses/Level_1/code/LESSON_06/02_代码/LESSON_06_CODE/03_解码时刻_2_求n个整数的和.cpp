#include <iostream>
using namespace std;

int main() {
    //求n个整数的和
    int n;
    cin >> n;
    int sum = 0;
    int m;
    for (int i = 1; i <= n; i += 1) {
        cin >> m;
        sum += m;
    }
    cout << sum << endl;
    return 0;
}
