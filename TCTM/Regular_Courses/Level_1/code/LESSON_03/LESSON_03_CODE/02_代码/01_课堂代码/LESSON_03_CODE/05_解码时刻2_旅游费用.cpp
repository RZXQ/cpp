#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int s = 0;
    if (n <= 5) s = 300 * n;
    else s = 280 * n;
    cout << s;
    return 0;
}
