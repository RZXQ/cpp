#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int s = b * c;
    if (a >= s)
        cout << a - s << endl;
    else
        cout << "NO" << endl;
    return 0;
}
