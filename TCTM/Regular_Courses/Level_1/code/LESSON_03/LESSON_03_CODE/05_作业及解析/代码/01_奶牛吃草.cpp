#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a = m / (n * 5);
    if (a >= 10)
        cout << a << endl;
    else
        cout << "NO" << endl;
    return 0;
}
