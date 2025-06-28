#include <iostream>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    if (a - b == 1 || b - a == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
